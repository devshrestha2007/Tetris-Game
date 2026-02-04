#pragma once

class Grid
{
    public:
    Grid();
   void Initialize();
   void Print();
    int grid [30][40];


    private:
    int numrow;
    int numcolumn;
    int cellsize;
    

};