cmake_minimum_required(VERSION 3.10)
project(data-structures VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Options to control building of benchmarks and tests
option(BUILD_BENCHMARKS "Build benchmarks" OFF)
option(BUILD_TESTS "Build tests" OFF)


if(BUILD_BENCHMARKS OR BUILD_TESTS)
    include(FetchContent)

    # Benchmarks
    if(BUILD_BENCHMARKS)
        FetchContent_Declare(
            googlebenchmark
            GIT_REPOSITORY https://github.com/google/benchmark.git
            GIT_TAG v1.8.3
            )
        FetchContent_MakeAvailable(googlebenchmark)

        add_subdirectory(benchmarks)
    endif()

    # Tests
    if(BUILD_TESTS)
        FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG v1.14.0
            )
        FetchContent_MakeAvailable(googletest)

        enable_testing()
        add_subdirectory(tests)
    endif()
endif()
