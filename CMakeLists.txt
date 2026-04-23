cmake_minimum_required(VERSION 3.2.0)
set(PROC_NAME "IDV")
project(${PROC_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

add_executable(${PROC_NAME} 
  src/main.cpp

  header/Tests/Tests.hpp
  src/Tests/Tests.cpp

  header/Utils/Utils.hpp
  src/Utils/Utils.cpp 
)

target_link_libraries(${PROC_NAME} GTest::gtest)

include(GoogleTest)
gtest_discover_tests(${PROC_NAME})
