# CMakeList.txt: LidView 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

file(GLOB SOURCE_FILE "src/*.cpp")
file(GLOB INCLUDE_FILE "src/*.h")

# 将源代码添加到此项目的可执行文件。
add_executable (LidView ${SOURCE_FILE})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LidView PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(LidView PRIVATE ${INCLUDE_FILE})

# TODO: 如有需要，请添加测试并安装目标。
