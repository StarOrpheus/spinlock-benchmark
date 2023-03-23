## About

Comparison of simple spinlocks and `std::mutex`

## Results

#### Mac air M2

| Benchmark                             | Time    | CPU     | Iterations | UserCounters... |
|---------------------------------------|---------|---------|------------|-----------------|
| MyFixture<std::mutex>/threads:1       | 5.78 ns | 5.77 ns | 90571506   | 185.431M/s      |
| MyFixture<std::mutex>/threads:2       | 25.1 ns | 48.1 ns | 17974990   | 268.651M/s      |
| MyFixture<std::mutex>/threads:4       | 29.5 ns | 102 ns  | 7056664    | 705.396M/s      |
| MyFixture<std::mutex>/threads:8       | 23.8 ns | 122 ns  | 6156280    | 1.39718G/s      |
| MyFixture<std::mutex>/threads:16      | 26.5 ns | 208 ns  | 3522784    | 2.96585G/s      |
| MyFixture<spinlock_simple>/threads:1  | 4.45 ns | 4.45 ns | 155069327  | 367.653M/s      |
| MyFixture<spinlock_simple>/threads:2  | 21.8 ns | 43.7 ns | 17534630   | 712.213M/s      |
| MyFixture<spinlock_simple>/threads:4  | 58.2 ns | 233 ns  | 2905648    | 1.59477G/s      |
| MyFixture<spinlock_simple>/threads:8  | 195 ns  | 1511 ns | 413736     | 3.4526G/s       |
| MyFixture<spinlock_simple>/threads:16 | 284 ns  | 2364 ns | 271216     | 6.74479G/s      |
| MyFixture<spinlock2>/threads:1        | 4.55 ns | 4.55 ns | 155199631  | 359.83M/s       |
| MyFixture<spinlock2>/threads:2        | 20.7 ns | 41.4 ns | 19021480   | 695.774M/s      |
| MyFixture<spinlock2>/threads:4        | 45.3 ns | 180 ns  | 5422572    | 1.11762G/s      |
| MyFixture<spinlock2>/threads:8        | 88.2 ns | 678 ns  | 800000     | 4.04249G/s      |
| MyFixture<spinlock2>/threads:16       | 135 ns  | 1354 ns | 787456     | 4.12686G/s      |
