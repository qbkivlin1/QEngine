file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(hash STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(hash PUBLIC public)