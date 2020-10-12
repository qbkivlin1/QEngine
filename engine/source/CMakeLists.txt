cmake_minimum_required(VERSION 3.18)

project(
	q_engine
	VERSION 0.1
	DESCRIPTION "q_engine by qbkivlin"
	LANGUAGES C
)

add_subdirectory(engine)


set(PLATFORM_TO_BUILD "WINDOWS" CACHE STRING "Platform selected at CMake configure time")
set_property(CACHE PLATFORM_TO_BUILD PROPERTY STRINGS WINDOWS ANDROID)

if(${PLATFORM_TO_BUILD} MATCHES "WINDOWS")
	add_subdirectory(launch/windows)
	add_subdirectory(third_party/glfw)
endif()

if(${PLATFORM_TO_BUILD} MATCHES "ANDROID")
	add_subdirectory(launch/android)
endif()


