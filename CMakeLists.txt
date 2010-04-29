##############################################################
# Copyright (c) 2008-2010 Daniel Pfeifer                     #
#                                                            #
# Distributed under the Boost Software License, Version 1.0. #
##############################################################

cmake_minimum_required(VERSION 2.8.0 FATAL_ERROR)
project(slcc)

set(CMAKE_BUILD_TYPE "Debug")
#add_definitions(-std=c++0x)

set(CTOOLBOX_USE_FILE ${CMAKE_BINARY_DIR}/UseCToolBox.cmake)
file(DOWNLOAD
  http://github.com/purpleKarrot/CToolBox/raw/master/UseCToolBox.cmake
  ${CTOOLBOX_USE_FILE})
include(${CTOOLBOX_USE_FILE})

set(Boost_USE_STATIC_LIBS   ON)
set(Boost_USE_MULTITHREADED ON)
find_package(Boost 1.40 REQUIRED COMPONENTS system)

#set(OPENCL_ROOT $ENV{ATISTREAMSDKROOT})
#find_package(OpenCL REQUIRED)
find_package(OpenGL REQUIRED)
add_definitions(-DGL3_PROTOTYPES=1)

include(Extract)
extract(${CMAKE_SOURCE_DIR}/include/boost-la.zip ${CMAKE_BINARY_DIR}/include)

include_directories(
  include
  ${CMAKE_BINARY_DIR}/include
  ${Boost_INCLUDE_DIRS}
  )

#add_subdirectory(doc)
#add_subdirectory(test)
#add_subdirectory(tools)
