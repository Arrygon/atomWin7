#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main(){
system("color 02");
int i,j,o,s;
srand(time(0));

for(int o=0; o<80; o++){
    if(o==1){
        for(int i=0; i<25; i++){
            Sleep(50);
            cout << rand()%2 << endl;
        }
    }
    if(o==2){
        for(int j=0; j<25; j++){
            Sleep(50);
            cout << rand()%2 << endl;
        }
    }
    if(o==3){
        for(int s=0; s<25; s++){
            Sleep(50);
            cout << rand()%2 << endl;
        }
    }
}


    return 0;
}
