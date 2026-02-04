#include <raylib.h>
#include "grid.h"


int main() 
{
    Grid grid = Grid();
 InitWindow(300,600,"Tertris");
 SetTargetFPS (60);
 Color lightgreen = {144, 238, 144};
 
 grid.Print();
 
 while (WindowShouldClose() == false){
    BeginDrawing();
    ClearBackground (lightgreen);
    
    EndDrawing();
 }
 CloseWindow();   
}