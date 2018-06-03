#include <iostream>
#include <windows.h>
using namespace std;

void StartProgram(string filename){

    ShellExecute(NULL,"open",filename.c_str(),NULL,NULL,SW_SHOWNORMAL);
}

int main(){
system("color 02");

StartProgram("mspaint");

    return 0;
}
