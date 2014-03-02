#include <cstdlib>
#include <iostream>
#include "screen-util.h"
using namespace std;

int main(int argc, char *argv[])
{
    int  choice = 99;
    do{
        Menu();
        cin >> choice;
        DoOperation(choice);
    }while(choice  != 0);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
