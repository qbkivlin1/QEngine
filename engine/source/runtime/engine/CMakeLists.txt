file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(engine STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(engine PUBLIC public)

target_link_libraries(engine PUBLIC thread_pool)

set_target_properties( engine
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
)

