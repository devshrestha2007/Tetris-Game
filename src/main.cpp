#include <raylib.h>
#include "grid.h"


int main() 
{
    Grid grid = Grid();
 InitWindow(300,600,"Tertris");
 SetTargetFPS (60);

 Color darkblue = {44, 44, 127,255};
 grid.grid[0][2] = 6;
 
 grid.Print();

 
 while (WindowShouldClose() == false){

    BeginDrawing();
    ClearBackground (darkblue);
     grid.draw();
    
    EndDrawing();
 }
 CloseWindow();   
}