cmake_minimum_required( VERSION 3.0 )
project( TP_CPP )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED gtkmm-2.4 cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_Liste.out src/main_Liste.cpp src/Liste.cpp)
target_link_libraries( main_Liste.out ${PKG_LIBRARIES} )

add_executable( Liste_main_test.out src/Liste_main_test.cpp 
    src/Liste.cpp 
    src/Liste_test.cpp )
target_link_libraries( Liste_main_test.out ${PKG_LIBRARIES} )

