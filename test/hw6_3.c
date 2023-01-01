#include <stdio.h>
#include "Console.h"
#define ESC 27
#define MAX_WIDTH 256
#define MAX_HEIGHT 256
char buffer[MAX_HEIGHT][MAX_WIDTH] = { 0 };     // text buffer
//gcc hw6_3.c Console.c  -D_WINDOWS -Wall

void ClearBuffer(int width, int height, char buffer[][MAX_WIDTH], char c);
// Reuse your solution to HW5-3 for the following two functions
void DisplayBufferFromLeft(int width, int height, char buffer[][MAX_WIDTH]);
void DrawRectangleOnBuffer(int width, int height, char buffer[][MAX_WIDTH], int left, int top, int right, int bottom);


int main()
{
    int screen_width = getWindowWidth();
    int screen_height = getWindowHeight() - 3;

    // draw shape on buffer
    ClearBuffer(screen_width, screen_height, buffer, ' ');      // fill the 2D array with ' '
    DrawRectangleOnBuffer(screen_width, screen_height, buffer, 10, 5, 70, 20);
    DrawRectangleOnBuffer(screen_width, screen_height, buffer, 30, 3, 90, 15);
    DrawRectangleOnBuffer(screen_width, screen_height, buffer, 1, 1, screen_width, screen_height);

    // make holes in the walls
    buffer[14][77] = buffer[5][29] = buffer[3][89] = buffer[19][50] = buffer[2][54] = buffer[9][69] = ' ';
 
    clrscr();
    DisplayBufferFromLeft(screen_width, screen_height, buffer);

    printf("Move '#' by pressing keys (i: up, k: down, j: left, l: right, ESC: quit). ");

    int x = screen_width / 2, y = screen_height / 2;
    buffer[y - 1][x - 1] = ' ';             // for safety

    // display '#' at the center of the screen
    gotoxy(x, y);
    putchar('#');

    // display the current coordinate
    gotoxy(2, 1);
    printf(" x = %d, y = %d ", x, y);

    gotoxy(screen_width, 1);                // move the cursor to the upper right corner

    int key = 0;
    while((key = getch()) != ESC){          // repeat reading keys until the user presses the ESC key
        int newx = x, newy = y; 
        // TO DO: update the coordinate (newx, newy) accoridng to key (use the switch statement)
        //      'i': move up (decrease newy)
        if(key == 'i')newy--; //2
       //      'j': move left (decrease newx)
        else if(key == 'j') newx--;
        //      'k': move down (increase newy)
        else if(key == 'k') newy++; //4 
        //      'l': move right (increase newx)
        else if(key == 'l') newx++;//5


        // TO DO: if the new coordinate is empty, move (x, y) to (newx, newy),
        //      erase the current coordinate by printing a space character at (x, y)
        //      move to (newx, newy) by assiging (newx, newy) to (x, y)
        //      print '#' at (x, y)
        //
        // Hint) Check the value of buffer[newy - 1][newx - 1] to know whether (newx, newy) is empty.
        if(buffer[newy-1][newx-1] != '*'){
           //buffer[x-1][y-1] = '$';
           //ClearBuffer(x-1, y-1, buffer, ' ');
           gotoxy(x,y);
           printf(" ");
           gotoxy(1,screen_height);


            
            x=newx;
            y=newy;
            gotoxy(x,y);
            printf("#");
        }


        // display current coordinate and move the cursor to the upper right corner
        gotoxy(2, 1);
        printf(" x = %3d, y = %3d ", x, y);
        gotoxy(screen_width, 1);
    }

    gotoxy(1, screen_height);
    printf("Bye!\n");
    
    return 0;
}

void ClearBuffer(int width, int height, char buffer[][MAX_WIDTH], char c)
// This function fills a text buffer with character c.
// Read this function carefully and learn how to pass a 2D array by a parameter.
{

    buffer[width][height] = c;
    // for(int i = 0; i < height; i++){
    //     for(int j = 0; j < width; j++)
    //         buffer[i][j] = c;
    // }
}

void DisplayBufferFromLeft(int width, int height, char buffer[][MAX_WIDTH])
// TO DO: implement this function by reusing your solution to hw5_3
{
    // Display buffer from the left side of the screen
    for(int x = 1; x <= width; x++){
        for(int y = 1; y <= height; y++){
            gotoxy(x, y);
            putchar(buffer[y - 1][x - 1]);
        }
    }

    //      wait for 25 msec after drawing each column

    MySleep(25);

}

void DrawRectangleOnBuffer(int width, int height, char buffer[][MAX_WIDTH], int left, int top, int right, int bottom)
// Draw a rectangle on a 2D character array using character '*'
// TO DO: implement this function by reusing your solution to hw5_3
{
    // draw the top side
    for(int i = left; i <= right; i++)
        buffer[top - 1][i - 1] = '*';

    // TO DO: draw the left side
    for(int i=top; i<=bottom; i++)
        buffer[i-1][left-1] = '*';

    // TO DO: draw the right side
    for(int i=top; i<=bottom; i++){
        buffer[i-1][right-1] = '*';
    }

    // TO DO: draw the bottom side
    for(int i=left; i<=right; i++)
        buffer[bottom-1][i-1] = '*';

}