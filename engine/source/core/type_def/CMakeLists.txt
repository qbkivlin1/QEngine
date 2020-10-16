file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(type_def STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(type_def PUBLIC public)