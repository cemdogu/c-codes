#include<iostream>
using namespace std;

int pow(int x, int y)
{
    int result = 1;
    for(int i=0; i<y; i++){
            result = result * x;
    }
    
    return result;
}

int main()
{
    int x;
    
    cout<<"enter x : ";
    cin >> x;
    
    cout << endl;
    
    cout << pow(x, 5) << endl;
    
    system("pause");
    return 0;
}   
