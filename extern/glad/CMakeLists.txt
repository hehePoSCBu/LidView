project(glad LANGUAGES C)

file(GLOB GLAD_SRC "src/*.c")
add_library(glad STATIC ${GLAD_SRC})

target_include_directories(glad PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)