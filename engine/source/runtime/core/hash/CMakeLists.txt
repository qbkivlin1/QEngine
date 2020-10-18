file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_library(hash STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(hash PUBLIC public)

set_target_properties( hash
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
)