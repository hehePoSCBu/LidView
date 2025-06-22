#include<vector>

std::vector<float> vertices = {
	//     ---- 位置 ----       ---- 颜色 ----     - 纹理坐标 -
		 0.5f,  0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f,   // 右上
		 0.5f, -0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,   // 右下
		-0.5f, -0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f,   // 左下
		-0.5f,  0.5f, 0.0f,   1.0f, 1.0f, 0.0f,   0.0f, 1.0f    // 左上
};

std::vector<float> texCoord = {
	1.0f, 1.0f, // 右上
	1.0f, 0.0f, // 右下
	0.0f, 0.0f, // 左下
	0.0f, 1.0f  // 左上
};

// Add default indices for a quad (two triangles)
std::vector<unsigned int> indices = {
	0, 1, 2,
	0, 2, 3
};
