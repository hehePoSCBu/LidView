#include<vector>

std::vector<float> vertices = {
	//     ---- λ�� ----       ---- ��ɫ ----     - �������� -
		 0.5f,  0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f,   // ����
		 0.5f, -0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,   // ����
		-0.5f, -0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f,   // ����
		-0.5f,  0.5f, 0.0f,   1.0f, 1.0f, 0.0f,   0.0f, 1.0f    // ����
};

std::vector<float> texCoord = {
	1.0f, 1.0f, // ����
	1.0f, 0.0f, // ����
	0.0f, 0.0f, // ����
	0.0f, 1.0f  // ����
};

// Add default indices for a quad (two triangles)
std::vector<unsigned int> indices = {
	0, 1, 2,
	0, 2, 3
};
