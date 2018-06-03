#include <iostream>
#include <windows.h>
using namespace std;

int xyz(){
    int a = 1;

    for (int i=0; i<30; i++){
            cout << "xyz " << a <<endl;
        a++;
        Sleep(200);
    }
}
