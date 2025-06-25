#include "Level.h"
#include <iostream>

void Level::RegisterObject(const Object* object)
{
    if (!object) {
        std::cerr << "Error: Attempted to register a null object." << std::endl;
        return;
    }
}

void Level::load()
{
        ));
    }
}

void Level::unload()
{
    objects.clear();
}

void Level::draw()
{
    for (const auto& object : objects) {
    }
}