#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "Color.h"

class Block
{
public:
Block();
int id;
std::map<int , std::vector<Position>>cells ;


private:
 int cellsize;
 int rotationState;
 std::vector<Color>Colors;
};