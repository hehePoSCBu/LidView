#pragma once

#include <vector>
#include <string>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "shader.h"

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
};

struct Texture {
    GLuint id;
    std::string type;
    aiString path;
};

class Mesh {
public:
    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
    void Draw(Shader& shader);

private:
    void setupMesh();

    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    std::vector<Texture> textures;

    GLuint VAO, VBO, EBO;
};

class Model {
public:
    Model(const char* path) { loadModel(path); }
    void Draw(Shader& shader);

    // 模型变换
    glm::vec3 position = glm::vec3(0.0f);
    glm::vec3 scale = glm::vec3(1.0f);
    glm::vec3 rotation = glm::vec3(0.0f); // 欧拉角 (度)

    // 获取模型矩阵
    glm::mat4 getModelMatrix() const;

private:
    void loadModel(std::string path);
    void processNode(aiNode* node, const aiScene* scene);
    Mesh processMesh(aiMesh* mesh, const aiScene* scene);
    std::vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, std::string typeName, const aiScene* scene);
    GLuint textureFromFile(const char* path, const std::string& directory);
    GLuint textureFromMemory(const unsigned char* data, unsigned size);
    GLuint textureFromPixels(const aiTexel* pixels, unsigned width, unsigned height);

    std::vector<Mesh> meshes;
    std::string directory;
    std::vector<Texture> textures_loaded;
    const aiScene* currentScene;
};