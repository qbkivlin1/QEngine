file (GLOB DEVELOP_CONFIG "develop/*.ini")

set(ALL_CONFIG ${DEVELOP_CONFIG})

add_custom_target(config
    SOURCES ${ALL_CONFIG}
)

set(OUTPUT_DIR "${CMAKE_BINARY_DIR}/binary/$<$<CONFIG:Release>:Release>$<$<CONFIG:Debug>:Debug>")

add_custom_command(TARGET config POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${ALL_CONFIG} ${OUTPUT_DIR}
)