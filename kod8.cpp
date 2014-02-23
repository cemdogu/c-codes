#include<iostream>

using namespace std;

int calcSum(int x, int y)
{
    return x + y;
}

int calcBorders(int x, int y)
{
    return 2*(x + y);
}   

int main()
{
    int x,y,sum;
    
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
