#pragma once

#include"Object.h"
#include <memory>
#include <vector>

struct ObjectParams {
    std::vector<float> vertices;
    std::vector<float> texCoords;
    std::vector<unsigned int> indices;
    std::string vertex_shader_path;
    std::string fragment_shader_path;
    std::string texture_path;
};

class Level
{
public:
    void RegisterObject(const Object* object);
    void load();
    void unload();

    void draw();
private:
    std::vector<ObjectParams> object_params;
    std::vector<std::unique_ptr<Object>> objects;
};