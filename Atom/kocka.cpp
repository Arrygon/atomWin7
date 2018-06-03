#include <iostream>
#include <windows.h>
using namespace std;

int main(){
system("color 02");
int a,b;
a = 1;
    for(int i=0; i<5; i++){
        for(int j=1; j<9; j++){
            cout << "\xdb";
        }
        cout << a;
        a++;

        cout << endl;
}

for(int o=1; o<9; o++){
    b = o;
    cout << b;
}
    return 0;
}
