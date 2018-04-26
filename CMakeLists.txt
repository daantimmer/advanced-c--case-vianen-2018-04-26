cmake_minimum_required (VERSION 3.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project (HotelApplication)
add_executable(
    HotelApplication
    src/main.cpp
    # excercises/vectorToQueue.cpp
    # excercises/vectorToDeque.cpp
    # excercises/stdpair.cpp
    # excercises/weakptr.cpp
    # excercises/threads.cpp
    # excercises/mutex.cpp
    # excercises/boostvectors.cpp
)