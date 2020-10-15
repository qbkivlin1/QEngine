cmake_minimum_required(VERSION 3.18)

project(
	q_engine
	VERSION 0.1
	DESCRIPTION "q_engine by qbkivlin"
	LANGUAGES C
)


add_subdirectory(engine)
add_subdirectory(core/thread_pool)

add_subdirectory(third_party/tinycthread)

set(QENGINE_PLATFORM_TO_BUILD "WINDOWS" CACHE STRING "Platform selected at CMake configure time")
set_property(CACHE QENGINE_PLATFORM_TO_BUILD PROPERTY STRINGS WINDOWS ANDROID)

if(${QENGINE_PLATFORM_TO_BUILD} MATCHES "WINDOWS")
	add_subdirectory(third_party/glfw)
	add_subdirectory(launch/windows)
endif()

if(${QENGINE_PLATFORM_TO_BUILD} MATCHES "ANDROID")
	add_subdirectory(launch/android)
endif()


