project(LidViewServer VERSION 0.0.1 LANGUAGES CXX)

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_library(LidViewServer STATIC ${SOURCE_FILES})

target_link_libraries(LidViewServer PRIVATE glfw glad)
target_include_directories(LidViewServer PRIVATE 
	../extern/glad/include 
	../extern/glfw/include
	../extern/glm
	../LidViewServer/src
	../extern
)

set_target_properties(LidViewServer PROPERTIES CXX_STANDARD 20 CXX_STANDARD_REQUIRED YES)