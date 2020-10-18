cmake_minimum_required(VERSION 3.18)

project(
	q_engine
	VERSION 0.1
	DESCRIPTION "q_engine by qbkivlin"
	LANGUAGES C
)

add_subdirectory(runtime/engine)
add_subdirectory(runtime/core/thread_pool)
add_subdirectory(runtime/core/type_def)
add_subdirectory(runtime/core/hash)

add_subdirectory(third_party/tinycthread)

add_subdirectory(develop/qht)

add_subdirectory(config)


set(QENGINE_PLATFORM_TO_BUILD "WINDOWS" CACHE STRING "Platform selected at CMake configure time")
set_property(CACHE QENGINE_PLATFORM_TO_BUILD PROPERTY STRINGS WINDOWS ANDROID)

if(${QENGINE_PLATFORM_TO_BUILD} MATCHES "WINDOWS")
	add_subdirectory(third_party/glfw)
	add_subdirectory(runtime/launch/windows)
endif()

if(${QENGINE_PLATFORM_TO_BUILD} MATCHES "ANDROID")
	add_subdirectory(runtime/launch/android)
endif()

set(CMAKE_SOURCE_DIR, ${CMAKE_SOURCE_DIR})
configure_file(develop/qht/public/cmake_config.h.in ${CMAKE_SOURCE_DIR}/develop/qht/public/cmake_config.h)



