
#pragma once
#include <vector>
#include <raylib.h>
class Grid
{
    public:
    Grid();
   void Initialize();
   void Print();
   void draw();
    int grid [30][40];


    private:
 
    int numrow;
    int numcolumn;
    int cellsize;

    std::vector <Color>colors;
    

};