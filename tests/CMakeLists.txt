cmake_minimum_required(VERSION 3.0)
project(TestCalculator)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/lib)
include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_executable(exec test_calculator.cpp)
target_link_libraries(exec gtest_main)
target_link_libraries(exec calculator_lib)
add_test(NAME example_test COMMAND exec)
