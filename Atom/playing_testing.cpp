#include <iostream>
#include <windows.h>
using namespace std;
int art(){
    cout << "   *****" <<endl
         << "  ******" <<endl
         << " *** ***" <<endl
         << "***  ***" <<endl
         << "     ***" <<endl
         << "     ***" <<endl
         << "     ***" <<endl
         << "     ***" <<endl
         << "     ***" <<endl;
}


int dot(){
    for(int i=0; i<4; i++){
        cout << ".";
        Sleep(300);
    }
}

int main(){

int y;
string x;

cout << "What is your name ?" <<endl;

getline(cin,x);

    cout << endl << "Hello " << x << " how old are you ?"<<endl;

        cin >> y;
        if(y == 165){
            cout << "EXITING PROGRAM" << dot() <<endl;
        }else{
            cout << "OK" <<endl;
        }

    return 0;
}
