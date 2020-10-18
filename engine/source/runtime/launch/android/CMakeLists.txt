file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_executable(launch ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(launch PUBLIC public)
target_link_libraries(launch PUBLIC engine)


