// assimp_config.h
#pragma once

// ��������
#define ASSIMP_BUILD_NO_OWN_ZLIB

// ����������
#if defined(_MSC_VER)
#  define ASSIMP_BUILD_COMPILER_MSVC
#elif defined(__GNUC__)
#  define ASSIMP_BUILD_COMPILER_GCC
#endif

// ƽ̨ʶ��
#if defined(_WIN32)
#  define ASSIMP_BUILD_OS_WINDOWS
#elif defined(__linux__)
#  define ASSIMP_BUILD_OS_LINUX
#elif defined(__APPLE__)
#  define ASSIMP_BUILD_OS_APPLE
#endif

// �ֽ��� (����Ŀ��ƽ̨����)
#define ASSIMP_BUILD_ENDIAN_LITTLE 1
#define ASSIMP_BUILD_ENDIAN_BIG 0

// ���ò���Ҫ�ĸ�ʽ (��С���)
#define ASSIMP_BUILD_NO_X_IMPORTER
#define ASSIMP_BUILD_NO_3DS_IMPORTER
#define ASSIMP_BUILD_NO_MD3_IMPORTER
// ����blend��ʽ��fbx��ʽ
#define ASSIMP_BUILD_BLEND_IMPORTER
#define ASSIMP_BUILD_FBX_IMPORTER

// �ؼ����ܿ���
#define ASSIMP_BUILD_DLL_EXPORT
#define ASSIMP_BUILD_SINGLETHREADED
#define ASSIMP_BUILD_DEBUG
#define ASSIMP_BUILD_RELEASE

#define ASSIMP_BUILD_FBX_IMPORTER

#ifndef AI_CONFIG_APP_SCALE_KEY
#define AI_CONFIG_APP_SCALE_KEY "APP_SCALE_FACTOR"
#endif

#ifndef AI_CONFIG_CHECK_IDENTITY_MATRIX_EPSILON_DEFAULT
#define AI_CONFIG_CHECK_IDENTITY_MATRIX_EPSILON_DEFAULT 1e-6f
#endif