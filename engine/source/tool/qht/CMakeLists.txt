file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_executable(qht ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(qht PUBLIC public)