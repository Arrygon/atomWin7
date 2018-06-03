#include <iostream>
#include <windows.h>
using namespace std;

int main(void){
system("color 02");

int vek;
char volba;
bool obcan;

cout << "Kolik vam je let: ";
cin >> vek;
cout << "Jste Americky obcan ? (A/N): ";
cin >> volba;
obcan = (volba == 'A') ? true : false;
if (vek >= 18)
    if (obcan == 1)
    cout << "Muzete volit.\n";
else
    cout << "Volit nemuzete.\n";
else
    cout << "Volit nemuzete.\n";
    return 0;
}
