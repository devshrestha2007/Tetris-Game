#include "grid.h"
#include <iostream>
using namespace std;
#include  <raylib.h>>

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

 vector<Color>Grid::GetCellColour(){
const Color darkGrey = {26, 31, 40, 255};
const Color green = {47, 230, 23, 255};
const Color red = {232, 18, 18, 255};
const Color orange = {226, 116, 17, 255};
const Color yellow = {237, 234, 4, 255};
const Color purple = {166, 0, 247, 255};
const Color cyan = {21, 204, 209, 255};
const Color blue = {13, 64, 216, 255};
const Color lightBlue = {59, 85, 162, 255};
const Color darkBlue = {44, 44, 127, 255};


 return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
 }

 void Grid::draw(){
    for(int row = 0; row<numrow; row++ ){
         for (int col =0 ; col<numcolumn; col++){
           int cellvalue =  grid[row][col];
            DrawRectangle(row*cellsize+1,col*cellsize+1,cellsize-1,cellsize-1,colors[cellvalue]);
    }
 }
}