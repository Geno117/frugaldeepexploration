cmake_minimum_required(VERSION 2.8)
project( frugal )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} include )
add_executable( fdeep_check fdeep_check.cpp include/fdeep/fdeep.hpp)

add_executable(opencv_check opencv_trial.cpp)
target_link_libraries( opencv_check ${OpenCV_LIBS} )


#add_executable( main main.cpp )
add_executable( main main.cpp include/fdeep/fdeep.hpp)
target_link_libraries( main ${OpenCV_LIBS} )

