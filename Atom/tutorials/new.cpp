#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main(){
system("color 02");

string x;
string y;
    cin >> x >> y;
    cout << x + y << endl;
short b;
b = 32768;
    cout << b << endl;

int a;
    cout << sizeof(int) << endl;
        cout << &a << endl;

// a = a + 2
// a += 2     a -= 2    a *= 2    a /= 2    a %=2
///////////////////////////////////////////////
// #include <cmath>
cout << pow(2, 3) << endl;

///////////////////////////////////////////////
int h;
cin >> h;

 /*if(h == 5){
     cout << "h je 5" << endl;
 }else{
     cout << "h nije 5" << endl;
}*/
    /* cout << "zadane cislo " <<
        (h == 5) ? "h je 5" : "h nije 4"; */

    return 0;
}
