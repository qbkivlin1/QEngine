file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(thread_pool STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(thread_pool PUBLIC public)
target_include_directories(thread_pool PUBLIC ../type_def)

target_link_libraries(thread_pool PUBLIC tinycthread)

set_target_properties( thread_pool
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
)