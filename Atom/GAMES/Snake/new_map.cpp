#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdio>
using namespace std;

bool gameOver;

int x, y, fruitX, fruitY, length, score;
int width = 20;
int height = 20;
int mapCounter = 0;

int tailX[1000], tailY[1000];
int nTail;

enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;

void setup(){

    gameOver = false;
    dir = STOP;

    x = width / 2;
    y = height / 2;

    srand(time(0));
    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0;
}
void draw(){

    system("cls");
    int map[20][20] = {

        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    };

    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if(mapCounter == 20){
                cout << endl;
                mapCounter = 0;
            }
            if(map[i][j] == 1){
                cout << "#";
            }else if (map[i][j] == 0){
                cout << " ";
            }
            mapCounter++;
        }

        if (map[i] == y && map[j] == x)
            cout << "O";
        else if (map[i] == fruitY && map[j] == fruitX)
            cout << "F";
        else if(map[i] == fruitY_s && map[j] == fruitX_s)          //////////////////////
        cout << "S";                              		////////////////////
        else
        {
            bool print = false;
            for (int k = 0; k < nTail; k++)
            {
                if (tailX[k] == map[j] && tailY[k] == map[i])
                {
                    cout << "o";
                    print = true;
                }
            }
    }

}



}
void input(){

    if (kbhit())
	{
		switch (getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void logic(){
    int prevX = tailX[0];
	int prevY = tailY[0];

	int prev2X, prev2Y;

	tailX[0] = x;
	tailY[0] = y;

	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];

		tailX[i] = prevX;
		tailY[i] = prevY;

		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	//if (x > width || x < 0 || y > height || y < 0)   // gameOver on wall contact
	//	gameOver = true;
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;

	for (int i = 0; i < nTail; i++)
		if (tailX[i] == x && tailY[i] == y)				//gameOver on tail contact
			gameOver = true;


if (x == fruitX && y == fruitY)
	{
		score += 1;
		length ++;						///////////////
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail += length;				//////length
	}


	if(rand() % 5 == 4){
	    if (x == fruitX && y == fruitY){

		    score += 10;
		    length ++;						///////////////
		    fruitX = rand() % width;
		    fruitY = rand() % height;
		    nTail += length;				//////length
	   }

   }
}
int main(){
    setup();

    while(!gameOver){

    draw();
    input();
    logic();
}
    Sleep(300);
    if(score == 50)
        Sleep(250);

    return 0;
}
