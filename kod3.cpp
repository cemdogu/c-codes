#include<iostream>
using namespace std;

int main()
{ 
    int x,y;
    y=0;
    x = 0;
    
    while (x<10)
    {
        cout<<x<<endl;
        y = y+x;     
        
        x++;
   }        
      cout <<   "Total :" << y << endl;   
      
      system("pause");
      return 0;
}
