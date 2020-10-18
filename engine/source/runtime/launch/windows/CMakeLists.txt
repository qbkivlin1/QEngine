file (GLOB PRIVATE_SOURCE "private/*.c")
file (GLOB PUBLIC_SOURCE "public/*.h")

add_executable(launch ${PRIVATE_SOURCE} ${PUBLIC_SOURCE})

target_include_directories(launch PUBLIC public)

target_link_libraries(launch PUBLIC engine)

find_package(Vulkan)

target_link_libraries(launch PUBLIC Vulkan::Vulkan)

target_link_libraries(launch PUBLIC glfw)

set_target_properties( launch
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/binary"
)






