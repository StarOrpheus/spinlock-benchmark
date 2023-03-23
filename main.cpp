#include <benchmark/benchmark.h>
#include <mutex>
#include <atomic>

struct spinlock_simple {

    void lock() {
        while (f.exchange(1, std::memory_order_acquire)) {}
    }

    void unlock() {
        f.store(0, std::memory_order_release);
    }

protected:
    std::atomic<unsigned> f{0};
};

struct spinlock2 : spinlock_simple {
    void lock() {
        while (f.load(std::memory_order_relaxed) || f.exchange(1, std::memory_order_acquire)) {}
    }
};

template<typename LockT>
class MyFixture : public benchmark::Fixture {
protected:
    LockT Lock;
    unsigned Counter {0};

    void update() {
        std::lock_guard lk(Lock);
        Counter++;
    }
};

BENCHMARK_TEMPLATE_DEFINE_F(MyFixture, std_mutex_test, std::mutex)(benchmark::State& st) {
    for (auto&& x : st) {
        this->update();
    }
}

BENCHMARK_REGISTER_F(MyFixture, std_mutex_test)->ThreadRange(1, 32);

BENCHMARK_TEMPLATE_DEFINE_F(MyFixture, spinlock_simple_test, spinlock_simple)(benchmark::State& st) {
    for (auto&& x : st) {
        this->update();
    }
}

BENCHMARK_REGISTER_F(MyFixture, spinlock_simple_test)->ThreadRange(1, 32);

BENCHMARK_TEMPLATE_DEFINE_F(MyFixture, spinlock2, spinlock2)(benchmark::State& st) {
    for (auto&& x : st) {
        this->update();
    }
}

BENCHMARK_REGISTER_F(MyFixture, spinlock2)->ThreadRange(1, 32);
