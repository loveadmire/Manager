cmake_minimum_required(VERSION 3.0.0)

set(This Manager)

project(${This} VERSION 0.1.0)

include(CTest)
enable_testing()
add_subdirectory(googletest)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#add src file name to value DIRSRCS   实现文件目录需要逐个添加
aux_source_directory(./src sourcedir)
aux_source_directory(./func sourcedir)

#添加头文件目录
include_directories( ${catkin_INCLUDE_DIRS} ./inc)

#添加库目录
link_directories(${catkin_LIB_DIRS} ./lib )

add_executable(${This} ${sourcedir})

add_subdirectory(tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CMAKE_INSTALL_PREFIX ./)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
