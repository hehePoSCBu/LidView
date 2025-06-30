#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>

//数学相关-About Maths
typedef glm::vec1 vec1;
typedef glm::vec2 vec2;
typedef glm::vec3 vec3;
typedef glm::vec4 vec4;

typedef glm::dvec1 dvec1;
typedef glm::dvec2 dvec2;
typedef glm::dvec3 dvec3;
typedef glm::dvec4 dvec4;

typedef glm::bvec1 bvec1;
typedef glm::bvec2 bvec2;
typedef glm::bvec3 bvec3;
typedef glm::bvec4 bvec4;

typedef glm::ivec1 ivec1;
typedef glm::ivec2 ivec2;
typedef glm::ivec3 ivec3;
typedef glm::ivec4 ivec4;

typedef glm::uvec1 uvec1;
typedef glm::uvec2 uvec2;
typedef glm::uvec3 uvec3;
typedef glm::uvec4 uvec4;

typedef glm::fvec1 fvec1;
typedef glm::fvec2 fvec2;
typedef glm::fvec3 fvec3;
typedef glm::fvec4 fvec4;

typedef glm::mat2 mat2;
typedef glm::mat3 mat3;
typedef glm::mat4 mat4;
typedef glm::mat2x2 mat2x2;
typedef glm::mat2x3 mat2x3;
typedef glm::mat2x4 mat2x4;
typedef glm::mat3x2 mat3x2;
typedef glm::mat3x3 mat3x3;
typedef glm::mat3x4 mat3x4;
typedef glm::mat4x2 mat4x2;
typedef glm::mat4x3 mat4x3;
typedef glm::mat4x4 mat4x4;

typedef glm::dmat2 dmat2;
typedef glm::dmat3 dmat3;
typedef glm::dmat4 dmat4;
typedef glm::dmat2x2 dmat2x2;
typedef glm::dmat2x3 dmat2x3;
typedef glm::dmat2x4 dmat2x4;
typedef glm::dmat3x2 dmat3x2;
typedef glm::dmat3x3 dmat3x3;
typedef glm::dmat3x4 dmat3x4;
typedef glm::dmat4x2 dmat4x2;
typedef glm::dmat4x3 dmat4x3;
typedef glm::dmat4x4 dmat4x4;

typedef glm::quat quat;

typedef glm::bmat2 bmat2;
typedef glm::bmat3 bmat3;
typedef glm::bmat4 bmat4;
typedef glm::bmat2x2 bmat2x2;
typedef glm::bmat2x3 bmat2x3;
typedef glm::bmat2x4 bmat2x4;
typedef glm::bmat3x2 bmat3x2;
typedef glm::bmat3x3 bmat3x3;
typedef glm::bmat3x4 bmat3x4;
typedef glm::bmat4x2 bmat4x2;
typedef glm::bmat4x3 bmat4x3;
typedef glm::bmat4x4 bmat4x4;

//按键状态-Key State
#define KEY_PRESS GLFW_PRESS
#define KEY_RELEASE GLFW_RELEASE
#defien KEY_REPEAT GLFW_REPEAT

enum KeyState {
	Press = KEY_PRESS,
	Release = KEY_RELEASE,
	Repeat = KEY_REPEAT
};

//功能按键-Function Keys
#define KEY_ESCAPE GLFW_KEY_ESCAPE
#define KEY_ENTER GLFW_KEY_ENTER
#define KEY_TAB GLFW_KEY_TAB
#define KEY_BACKSPCE GLFW_KEY_BACKSPACE
#define KEY_INSERT GLFW_KEY_INSERT
#define KEY_DELETE GLFW_KEY_DELETE
#define KEY_RIGHT GLFW_KEY_RIGHT
#define KEY_LEFT GLFW_KEY_LEFT
#define KEY_DOWN GLFW_KEY_DOWN
#define KEY_UP GLFW_KEY_UP
#define KEY_PAGE_UP GLFW_KEY_PAGE_UP
#define KEY_PAGE_DOWN GLFW_KEY_PAGE_DOWN
#define KEY_HOME GLFW_KEY_HOME
#define KEY_END GLFW_KEY_END
#define KEY_CAPS_LOCK GLFW_KEY_CAPS_LOCK
#define KEY_SCROLL_LOCK GLFW_KEY_SCROLL_LOCK
#define KEY_NUM_LOCK GLFW_KEY_NUM_LOCK
#define KEY_PRINT_SCREEN GLFW_KEY_PRINT_SCREEN
#define KEY_PAUSE GLFW_KEY_PAUSE

#define KEY_F1 GLFW_KEY_F1
#define KEY_F2 GLFW_KEY_F2
#define KEY_F3 GLFW_KEY_F3
#define KEY_F4 GLFW_KEY_F4
#define KEY_F5 GLFW_KEY_F5
#define KEY_F6 GLFW_KEY_F6
#define KEY_F7 GLFW_KEY_F7
#define KEY_F8 GLFW_KEY_F8
#define KEY_F9 GLFW_KEY_F9
#define KEY_F10 GLFW_KEY_F10
#define KEY_F11 GLFW_KEY_F11
#define KEY_F12 GLFW_KEY_F12
#define KEY_F13 GLFW_KEY_F13
#define KEY_F14 GLFW_KEY_F14
#define KEY_F15 GLFW_KEY_F15
#define KEY_F16 GLFW_KEY_F16
#define KEY_F17 GLFW_KEY_F17
#define KEY_F18 GLFW_KEY_F18
#define KEY_F19 GLFW_KEY_F19
#define KEY_F20 GLFW_KEY_F20
#define KEY_F21 GLFW_KEY_F21
#define KEY_F22 GLFW_KEY_F22
#define KEY_F23 GLFW_KEY_F23
#define KEY_F24 GLFW_KEY_F24
#define KEY_F25 GLFW_KEY_F25

//数字按键-Number Keys
#define KEY_0 GLFW_KEY_0
#define KEY_1 GLFW_KEY_1
#define KEY_2 GLFW_KEY_2
#define KEY_3 GLFW_KEY_3
#define KEY_4 GLFW_KEY_4
#define KEY_5 GLFW_KEY_5
#define KEY_6 GLFW_KEY_6
#define KEY_7 GLFW_KEY_7
#define KEY_8 GLFW_KEY_8
#define KEY_9 GLFW_KEY_9

//字母按键-Letter Keys
#define KEY_A GLFW_KEY_A
#define KEY_B GLFW_KEY_B
#define KEY_C GLFW_KEY_C
#define KEY_D GLFW_KEY_D
#define KEY_E GLFW_KEY_E
#define KEY_F GLFW_KEY_F
#define KEY_G GLFW_KEY_G
#define KEY_H GLFW_KEY_H
#define KEY_I GLFW_KEY_I
#define KEY_J GLFW_KEY_J
#define KEY_K GLFW_KEY_K
#define KEY_L GLFW_KEY_L
#define KEY_M GLFW_KEY_M
#define KEY_N GLFW_KEY_N
#define KEY_O GLFW_KEY_O
#define KEY_P GLFW_KEY_P
#define KEY_Q GLFW_KEY_Q
#define KEY_R GLFW_KEY_R
#define KEY_S GLFW_KEY_S
#define KEY_T GLFW_KEY_T
#define KEY_U GLFW_KEY_U
#define KEY_V GLFW_KEY_V
#define KEY_W GLFW_KEY_W
#define KEY_X GLFW_KEY_X
#define KEY_Y GLFW_KEY_Y
#define KEY_Z GLFW_KEY_Z