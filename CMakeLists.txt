cmake_minimum_required(VERSION 2.8.3)
project(cybathlon_commons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(catkin REQUIRED COMPONENTS 
			 roscpp 
			 std_msgs
			 rosneuro_msgs)

find_package(PkgConfig)

SET(CMAKE_BUILD_TYPE RelWithDebInfo)

catkin_package(
  INCLUDE_DIRS 
  	include
  LIBRARIES 
	${PROJECT_NAME}
  CATKIN_DEPENDS
  	roscpp
	std_msgs
	rosneuro_msgs
  DEPENDS
)


###########
## Build ##
###########

include_directories(${catkin_INCLUDE_DIRS} 
					include
					)


add_library(${PROJECT_NAME} src/commons.cpp)

target_link_libraries(${PROJECT_NAME} 
					  ${catkin_LIBRARIES}
					  )

add_dependencies(${PROJECT_NAME} 
				 ${catkin_EXPORTED_TARGETS})

