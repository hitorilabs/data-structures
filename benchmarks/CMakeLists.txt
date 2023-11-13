add_executable(bench_example bench_example.cpp)  # Benchmark sources
target_link_libraries(bench_example benchmark::benchmark)
