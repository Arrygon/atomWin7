#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>
using namespace std;

int main(){
system("color 02");

srand(time(0));

    for(int i=0; i<1000; i++){
        Sleep(50);
        
cout << rand()%2;
}
    return 0;
}
