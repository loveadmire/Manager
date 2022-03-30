cmake_minimum_required(VERSION 3.0.0)
project(Gtest VERSION 0.1.0)

set(This tests)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

# gtest
# add_subdirectory(./googletest)
#添加头文件目录
# include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include)
# include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/googletest/googlemock/include)

#添加头文件目录
include_directories( ${catkin_INCLUDE_DIRS} ../inc)

#添加源文件目录
# aux_source_directory(../src TEST_SRCS)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/src" TEST_SRCS)
# aux_source_directory(./test_mate.cc TEST_SRCS)
aux_source_directory(./ TEST_SRCS)
# aux_source_directory(../src TEST_SRCS)
aux_source_directory(../func TEST_SRCS)

add_executable(${This} ${TEST_SRCS})

set(CMAKE_INSTALL_PREFIX ./)

target_link_libraries(${This} 
    PRIVATE
    # gtest
    # gtest_main
    gmock
    gmock_main
    pthread
    )
add_test(
    NAME ${This}
    COMMAND ${This}
)
