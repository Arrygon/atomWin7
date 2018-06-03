#include <iostream>
#include <windows.h>
using namespace std;

int main(){
system("color 02");
short int a,b,c;

do {

cout << endl << "How long are you programming ? ";
cin >> a;
cout << "Whats the time ? (24h) ";
cin >> b;


if(a < 6 && a >= 0)
    if(b <= 4 && b >= 0 )
        cout << "You should go to sleep." << endl;
    else
        cout << "You can do more programing." << endl;
else
    cout << "You should stop programing for today." << endl;

}while (a !=100 || b != 100);
    return 0;
}
