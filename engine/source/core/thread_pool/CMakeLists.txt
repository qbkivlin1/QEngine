file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(thread_pool STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(thread_pool PUBLIC public)