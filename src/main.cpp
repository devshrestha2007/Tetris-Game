#include <raylib.h>
#include "grid.h"


int main() 
{
    Grid grid = Grid();
 InitWindow(300,600,"Tertris");
 SetTargetFPS (60);

 Color green = {144, 238, 144,255};
 grid.grid[0][2] = 6;
 
 grid.Print();

 
 while (WindowShouldClose() == false){

    BeginDrawing();
    ClearBackground (green);
     grid.draw();
    
    EndDrawing();
 }
 CloseWindow();   
}