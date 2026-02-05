#include "grid.h"
#include <iostream>
using namespace std;
#include  <raylib.h>
#include "Color.h"


Grid::Grid(){
numrow = 10;
numcolumn = 20;
cellsize =30;
Initialize();
colors = GetCellColour();
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



 void Grid::draw(){
    for(int row = 0; row<numrow; row++ ){
         for (int col =0 ; col<numcolumn; col++){
           int cellvalue =  grid[row][col];
            DrawRectangle(row*cellsize+1,col*cellsize+1,cellsize-1,cellsize-1,colors[cellvalue]);
    }
 }
}