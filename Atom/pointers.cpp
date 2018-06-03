#include <iostream>
#include <windows.h>
using namespace std;

int main(){
system("color 02");
int fish = 5;
    cout << &fish << endl;
    cout << fish << endl;

    int *fishPointer;
    fishPointer = &fish;

    cout << endl << fishPointer << endl;
    cout << *fishPointer << endl;
    cout << &*fishPointer << endl;

    return 0;
}
//0x22fe14
// x=x+5
// x=*p+5
//*p=*p+5
