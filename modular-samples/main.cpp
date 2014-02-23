#include <iostream>
#include "math-utils.h"

using namespace std;


int main()
{
    int x,y;
    cout<<"Enter first integer:"<<endl;
    cin>>x;
    cout<<"Enter second integer:"<<endl;
    cin>>y;
    
    cout << "sum : " << sum(x, y) << endl;
    cout << "area : " << area(x) << endl;
    sayHello();
    
    system("pause");
    return 0;  
    
}
