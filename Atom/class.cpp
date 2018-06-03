#include <iostream>
#include <windows.h>
using namespace std;

class test{
public:
    void out(){
        cout << "testing classes" << endl;
    }
};

int main(){
system("color 02");

    test testsObject;
    testsObject.out();

    return 0;
}
