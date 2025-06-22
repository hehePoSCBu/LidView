#include "Object.h"

Object::Object(const std::vector<float>& vertices, const char* vertex_shader_path, const char* fragment_shader_path)
	: vertices(vertices), shader(std::make_unique<Shader>(vertex_shader_path, fragment_shader_path))
{
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, this->vertices.size() * sizeof(float), this->vertices.data(), GL_STATIC_DRAW);
	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}

Object::~Object()
{
	if (VBO) glDeleteBuffers(1, &VBO);
	if (VAO) glDeleteVertexArrays(1, &VAO);
}

void Object::draw()
{
	shader->use();
	glBindVertexArray(VAO);
	glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(vertices.size() / 3));
	glBindVertexArray(0);
}