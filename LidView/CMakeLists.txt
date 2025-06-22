# CMakeList.txt: LidView 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

file(GLOB SOURCE_FILE "src/*.cpp" "src/Core/*.cpp" "src/Tools/*.cpp")

# 将源代码添加到此项目的可执行文件。
add_executable (LidView ${SOURCE_FILE})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LidView PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(LidView PRIVATE glfw glad)
target_include_directories(LidView PRIVATE 
	${CMAKE_SOURCE_DIR}/extern/glad/include 
	${CMAKE_SOURCE_DIR}/LidView/src/Core
	${CMAKE_SOURCE_DIR}/LidView/src/Tools
	${CMAKE_SOURCE_DIR}/extern/
)

# TODO: 如有需要，请添加测试并安装目标。
