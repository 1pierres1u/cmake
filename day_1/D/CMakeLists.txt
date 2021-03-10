project(number)
include_directories(.)
add_library(myLib b.cpp)
add_executable(number a.cpp)
target_link_libraries(number myLib)


