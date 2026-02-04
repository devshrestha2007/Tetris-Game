#include "grid.h"
#include <iostream>
using namespace std;

Grid::Grid(){
numrow = 5;
numcolumn = 5;
cellsize =10;
Initialize();
}

void Grid::Initialize(){
    for (int row = 0; row<numrow ; row++){
        for (int col =0 ; col<numcolumn; col++){
            grid[row][col] = 0;
        }
    }

}

 void Grid::Print(){
      for (int row = 0; row<numrow ; row++){
        for (int col =0 ; col<numcolumn; col++){
            cout << grid[row][col] ;
          
        }
        cout<< "\n";
    }

 }