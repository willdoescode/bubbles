cmake_minimum_required(VERSION 3.2)

project({{__NAME__}} C CXX)
set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-std=c++20")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(src/)
add_executable({{__NAME__}}_test test/main.cpp)
target_link_libraries({{__NAME__}}_test gtest_main)

include(GoogleTest)
gtest_discover_tests({{__NAME__}}_test)

find_package(Boost 1.76.0 COMPONENTS program_options REQUIRED)

include_directories(${Boost_INCLUDE_DIR})
include_directories(include/)

aux_source_directory(src/ SRC)
add_executable({{__NAME__}} ${SRC})

target_include_directories({{__NAME__}} PUBLIC include/)
target_include_directories({{__NAME__}} PUBLIC ${Boost_LIBRARIES})

