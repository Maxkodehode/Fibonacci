#include <stdio.h>
#include <raylib.h>

#define WIDTH 900
#define HEIGHT 600
#define COUNT 15

int numbers[COUNT];

void init_fibonacci()
{   numbers[0] = 1;
    numbers[1] = 1;
    for ( int i = 2; i < COUNT; i++){
        numbers[i] = numbers[i-1] + numbers[i-2];
    }
}
void print_fibonacci()
{
    for (int i = 0; i < COUNT; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
}
int main(int argc, char *argv[]){
    InitWindow(WIDTH, HEIGHT, "Fibonacci");
    
    
    init_fibonacci();
    print_fibonacci();
    
    
    SetTargetFPS(60);
    while (!WindowShouldClose())
        {
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawRectangle(50,50,50,50, WHITE);
        EndDrawing();
    }
    return 0;
}