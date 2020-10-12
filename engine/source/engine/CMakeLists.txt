file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(engine STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(engine PUBLIC public)