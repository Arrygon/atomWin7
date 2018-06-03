#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    system("color 02");
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<< str <<endl;


    return 0;
}
