file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_executable(launch WIN32 ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(launch PUBLIC public)
target_link_libraries(launch PUBLIC engine)

target_include_directories(launch PUBLIC ${PROJECT_SOURCE_DIR}/third_party/glfw/include)
target_link_libraries(launch PUBLIC glfw)
