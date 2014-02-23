#include<iostream>
using namespace std;
int main()
{
    int x,y;
    y = 0;
    for(x=0;x<=1000;x++)
    {
     if(x % 5 == 0){
     cout<<x<<endl;
     y = y+x;
      if(y > 5000) {
      break;
      }
     }
     
     
     }
         cout<<"total:" << y <<endl;
         
         
         system("pause");
         return 0;
         
         }  
              
