## About

Comparison of simple spinlocks and `std::mutex`

## Results

#### Mac air M2

| Benchmark                                               | Time    | CPU     |
|---------------------------------------------------------|---------|---------|
| MyFixture<std::mutex>/iterations:100000/threads:1       | 21.1 ns | 21.1 ns |
| MyFixture<std::mutex>/iterations:100000/threads:2       | 79.0 ns | 155 ns  |
| MyFixture<std::mutex>/iterations:100000/threads:4       | 48.1 ns | 157 ns  |
| MyFixture<std::mutex>/iterations:100000/threads:8       | 28.2 ns | 157 ns  |
| MyFixture<std::mutex>/iterations:100000/threads:16      | 26.0 ns | 201 ns  |
| MyFixture<std::mutex>/iterations:100000/threads:32      | 25.7 ns | 204 ns  |
| MyFixture<spinlock_simple>/iterations:100000/threads:1  | 4.87 ns | 4.88 ns |
| MyFixture<spinlock_simple>/iterations:100000/threads:2  | 14.3 ns | 28.6 ns |
| MyFixture<spinlock_simple>/iterations:100000/threads:4  | 62.8 ns | 249 ns  |
| MyFixture<spinlock_simple>/iterations:100000/threads:8  | 218 ns  | 1693 ns |
| MyFixture<spinlock_simple>/iterations:100000/threads:16 | 456 ns  | 3742 ns |
| MyFixture<spinlock_simple>/iterations:100000/threads:32 | 796 ns  | 6638 ns |
| MyFixture<spinlock2>/iterations:100000/threads:1        | 4.84 ns | 4.83 ns |
| MyFixture<spinlock2>/iterations:100000/threads:2        | 21.4 ns | 42.9 ns |
| MyFixture<spinlock2>/iterations:100000/threads:4        | 32.3 ns | 129 ns  |
| MyFixture<spinlock2>/iterations:100000/threads:8        | 74.8 ns | 586 ns  |
| MyFixture<spinlock2>/iterations:100000/threads:16       | 126 ns  | 1173 ns |
| MyFixture<spinlock2>/iterations:100000/threads:32       | 250 ns  | 2220 ns |
