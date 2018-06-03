#include <iostream>
#include <windows.h>
using namespace std;

int abc(){
    string x;
    int b;

    cout << "Hello I am your PC. what's your name ? " << endl;
    cin >> x;
    cout << x << " how old are you ?" << endl;
    cin >> b;
    if(b == 16){
        cout << "Do you want to know how old am I ?" << endl;
    }else{
        cout << "No you are not " << b << " years old." << endl;
    }
}
