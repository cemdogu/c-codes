#include<iostream>

using namespace std;

int calcSum(int x, int y)
{
    return x + y;
}

int calcBorders(int x, int y)
{
    cout << "test" << endl;
    return 2*(x + y);
}   

//geri donus degeri olmayan fonksiyon
void sayHello()
{
    cout<< "Hello World:" <<endl<<endl;
    return;
}

int main()
{
    int x,y,sum;
    
    sayHello();
    
    cout<<"Enter first integer:"<<endl;
    cin>>x;
    
    cout<<"Enter second integer:"<<endl;
    cin>>y;
    
    //sum = calcSum(x, y);
    sum = calcBorders(x, y);
    
    cout << "sum :" << sum << endl;
    
    system("pause");
    return 0;
}
