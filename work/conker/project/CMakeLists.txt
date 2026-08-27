cmake_minimum_required(VERSION 3.20)
project(conker_recomp C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

get_filename_component(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../.." ABSOLUTE)
add_subdirectory("${XBOXRECOMP_DIR}" "${CMAKE_BINARY_DIR}/xboxrecomp")

file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen/*.c")

add_executable(conker_recomp
    src/main.c
    src/recomp_manual.c
    ${RECOMP_GEN_SOURCES}
)

target_include_directories(conker_recomp PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen"
    "${XBOXRECOMP_DIR}/templates/runtime"
    "${XBOXRECOMP_DIR}/include"
)

target_compile_definitions(conker_recomp PRIVATE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    RECOMP_CODE_VA_START=0x00011000u
    RECOMP_CODE_VA_END=0x0088A410u
)

target_link_libraries(conker_recomp PRIVATE
    xboxrecomp
    d3d11
    dxgi
    dxguid
    xinput
    winmm
)

if(MSVC)
    target_compile_options(conker_recomp PRIVATE /bigobj /Od /Ob0 /w)
    target_link_options(conker_recomp PRIVATE /LARGEADDRESSAWARE /MAP)
endif()

set_target_properties(conker_recomp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
