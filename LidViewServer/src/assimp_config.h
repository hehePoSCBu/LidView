// assimp_config.h
#pragma once

// 基本配置
#define ASSIMP_BUILD_NO_OWN_ZLIB

// 编译器特性
#if defined(_MSC_VER)
#  define ASSIMP_BUILD_COMPILER_MSVC
#elif defined(__GNUC__)
#  define ASSIMP_BUILD_COMPILER_GCC
#endif

// 平台识别
#if defined(_WIN32)
#  define ASSIMP_BUILD_OS_WINDOWS
#elif defined(__linux__)
#  define ASSIMP_BUILD_OS_LINUX
#elif defined(__APPLE__)
#  define ASSIMP_BUILD_OS_APPLE
#endif

// 字节序 (根据目标平台设置)
#define ASSIMP_BUILD_ENDIAN_LITTLE 1
#define ASSIMP_BUILD_ENDIAN_BIG 0

// 禁用不需要的格式 (减小体积)
#define ASSIMP_BUILD_NO_X_IMPORTER
#define ASSIMP_BUILD_NO_3DS_IMPORTER
#define ASSIMP_BUILD_NO_MD3_IMPORTER
// 允许blend格式和fbx格式
#define ASSIMP_BUILD_BLEND_IMPORTER
#define ASSIMP_BUILD_FBX_IMPORTER

// 关键功能开关
#define ASSIMP_BUILD_DLL_EXPORT
#define ASSIMP_BUILD_SINGLETHREADED
#define ASSIMP_BUILD_DEBUG
#define ASSIMP_BUILD_RELEASE

#define ASSIMP_BUILD_FBX_IMPORTER