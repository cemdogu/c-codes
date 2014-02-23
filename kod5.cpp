#include<iostream>
using namespace std;

int topla(int x, int y)
{
    return x + y;
}

int main()
{
    int x,y,z;
    
    cout << "enter x:";
    cin >> x;
    cout << endl << "enter y : ";
    cin >> y;
    
    z = topla(x,y);
    cout << endl;
    cout<<"Sum of x and y : "<<z<<endl;
    cout<< "z:" << z << endl;
    
    system("pause");
    return 0;
    
    
}
