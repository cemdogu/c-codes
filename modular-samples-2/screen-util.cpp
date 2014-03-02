#include "screen-util.h"

void Menu()
{
     cout<<"----------"<<endl;
     cout<<"   MENU    "<<endl;
     cout<<"1.add"<<endl;
     cout<<"2.multiply"<<endl;
     cout<<"3.substract"<<endl;
     cout<<"----------"<<endl;
     cout<<"Enter you choice : ";
      
 }
 
      int ReadValue(string name)
      {
          int value = 0;
          cout << "enter " << name << " : ";
          cin >> value;
          return value;
      }
      
 
void DoOperation(int choice)
{
     int x = ReadValue("x");
     int y = ReadValue("y");
     
switch(choice)
{   
     case 1 : {
         cout<<"sum x and y"<<endl;
         cout << x+y;
          break;
     }        
     case 2 : {
         cout<<"multiply x and y"<<endl;
         cout << x*y;
          break;
          }
     case 3: {
          cout<<"substract y from x"<<endl;
          cout << x-y;
          break;
          }
          
     case 0: {
          break;
          }
     default: {
          cout<<"please select add,multiply or substract"<<endl;
          break;
               
               }     

          }   
          
          cout << endl;                    
   
 } 
      
      
 
