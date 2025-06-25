# CMakeList.txt: LidView 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

cmake_minimum_required(VERSION 3.15)
project(LidView)

file(GLOB_RECURSE SOURCE_FILE "src/*.cpp")

# 将源代码添加到此项目的可执行文件。
add_executable (LidView ${SOURCE_FILE})

target_link_libraries(LidView PRIVATE glfw glad LidViewServer)
target_include_directories(LidView PRIVATE 
	../LidViewServer/src/
	../extern/glm
	../extern/assimp/include
	../extern
)

set_target_properties(LidView PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED YES
)
# TODO: 如有需要，请添加测试并安装目标。
