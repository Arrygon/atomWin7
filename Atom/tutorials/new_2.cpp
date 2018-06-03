#include <iostream>
#include <windows.h>
using namespace std;

int main(){
system("color 02");
// if else
int a;
do{

cout << "insert a number from 1 to 5 : ";
cin >> a;
switch (a){

case 1 :
cout << "your number is 1" << endl;
break;

case 2 :
cout << "your number is 2" << endl;
break;

case 3 :
cout << "your number is 3" << endl;
break;

case 4 :
cout << "your number is 4" << endl;
break;

case 5 :
cout << "your number is 5" << endl;
break;

default :
cout << "you must enter a number from 1 to 5." << endl;
break;
}

}while(a != 123)
    cout << "Ending program";
    return 0;
}
