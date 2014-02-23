#include<iostream>
using namespace std;
//x=x*F(x-1)

int factorial(int x)
{
  int result = 1;
  for(int i=x; i>0; i--){
      result = result * i;    
  }
   
  return result;
}
    

int main()
{
    int x,a;
   
   cout<<"enter an integer:"<<endl;
   cin>>a;
   
   x = factorial(a);
   cout << "factorial : "<< x << endl;
   
   system("pause");
   return 0;
}  
    
    
