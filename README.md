## About

Comparison of simple spinlocks and `std::mutex`

## Results

#### Mac air M2

| Benchmark                             | Time    | CPU     |
|---------------------------------------|---------|---------|
| MyFixture<std::mutex>/threads:1       | 21.1 ns | 21.1 ns |
| MyFixture<std::mutex>/threads:2       | 79.0 ns | 155 ns  |
| MyFixture<std::mutex>/threads:4       | 48.1 ns | 157 ns  |
| MyFixture<std::mutex>/threads:8       | 28.2 ns | 157 ns  |
| MyFixture<std::mutex>/threads:16      | 26.0 ns | 201 ns  |
| MyFixture<std::mutex>/threads:32      | 25.7 ns | 204 ns  |
| MyFixture<spinlock_simple>/threads:1  | 4.87 ns | 4.88 ns |
| MyFixture<spinlock_simple>/threads:2  | 14.3 ns | 28.6 ns |
| MyFixture<spinlock_simple>/threads:4  | 62.8 ns | 249 ns  |
| MyFixture<spinlock_simple>/threads:8  | 218 ns  | 1693 ns |
| MyFixture<spinlock_simple>/threads:16 | 456 ns  | 3742 ns |
| MyFixture<spinlock_simple>/threads:32 | 796 ns  | 6638 ns |
| MyFixture<spinlock2>/threads:1        | 4.84 ns | 4.83 ns |
| MyFixture<spinlock2>/threads:2        | 21.4 ns | 42.9 ns |
| MyFixture<spinlock2>/threads:4        | 32.3 ns | 129 ns  |
| MyFixture<spinlock2>/threads:8        | 74.8 ns | 586 ns  |
| MyFixture<spinlock2>/threads:16       | 126 ns  | 1173 ns |
| MyFixture<spinlock2>/threads:32       | 250 ns  | 2220 ns |

#### i9-9980hk (Dell XPS laptop)

| Benchmark                             | Time    | CPU     |
|---------------------------------------|---------|---------|
| MyFixture<std::mutex>/threads:1       | 5.39 ns | 5.38 ns |
| MyFixture<std::mutex>/threads:2       | 58.7 ns | 117 ns  |
| MyFixture<std::mutex>/threads:4       | 55.3 ns | 190 ns  |
| MyFixture<std::mutex>/threads:8       | 63.3 ns | 434 ns  |
| MyFixture<std::mutex>/threads:16      | 66.9 ns | 925 ns  |
| MyFixture<std::mutex>/threads:32      | 63.5 ns | 958 ns  |
| MyFixture<spinlock_simple>/threads:1  | 7.41 ns | 7.41 ns |
| MyFixture<spinlock_simple>/threads:2  | 62.5 ns | 125 ns  |
| MyFixture<spinlock_simple>/threads:4  | 82.8 ns | 331 ns  |
| MyFixture<spinlock_simple>/threads:8  | 159 ns  | 1269 ns |
| MyFixture<spinlock_simple>/threads:16 | 300 ns  | 4661 ns |
| MyFixture<spinlock_simple>/threads:32 | 259 ns  | 6523 ns |
| MyFixture<spinlock2>/threads:1        | 6.98 ns | 6.97 ns |
| MyFixture<spinlock2>/threads:2        | 22.9 ns | 45.9 ns |
| MyFixture<spinlock2>/threads:4        | 38.6 ns | 154 ns  |
| MyFixture<spinlock2>/threads:8        | 40.5 ns | 323 ns  |
| MyFixture<spinlock2>/threads:16       | 93.4 ns | 1489 ns |
| MyFixture<spinlock2>/threads:32       | 66.8 ns | 1867 ns |
