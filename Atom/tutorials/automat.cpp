#include <iostream>
#include <windows.h>
using namespace std;

int main(){
system("color 02");
char x = 'x';
int cent;

do{
    cout << "Type how many cents do you have: ";
    cin >> cent;

    cout << "10 Eur:  " << cent/1000 << endl;
    cout << "5 Eur:  " << cent%1000/500 << endl;
    cout << "1 Eur:  " <<  cent%1000%500/100 << endl;
    cout << "50 Cent:  " << cent%1000%500%100/50 << endl;
    cout << "10 Cent:  " << cent%1000%500%100%50/10 << endl;
    cout << "5 Cent:  " << cent%1000%500%100%50%10/5 << endl;
    cout << "1 Cent:  " << cent%1000%500%100%50%10%5/1 << endl;
    
  }while( != x)
    return 0;
}
