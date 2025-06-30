#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>

typedef glm::vec1 vec1;
typedef glm::vec2 vec2;
typedef glm::vec3 vec3;
typedef glm::vec4 vec4;

typedef glm::mat2 mat2;
typedef glm::mat3 mat3;
typedef glm::mat4 mat4

#define KEY_PRESS GLFW_PRESS
#define KEY_RELEASE GLFW_RELEASE
#defien KEY_REPEAT GLFW_REPEAT

enum KeyState {
	Press = KEY_PRESS,
	Release = KEY_RELEASE,
	Repeat = KEY_REPEAT
};

//��������
#define KEY_SPACE GLFW_KEY_SPACE
#define KEY_ESCAPE GLFW_KEY_ESCAPE
#define KEY_APOSTTROPHE GLFW_KEY_APOSTROPHE
#define KEY_COMMA GLFW_KEY_COMMA
#define KEY_MINUS GLFW_KEY_MINUS
#define KEY_PERIOD GLFW_KEY_PERIOD
#define KEY_SLASH GLFW_KEY_SLASH

//���ְ���
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

//��ĸ����
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