#include<iostream>
using namespace std;

int main(){
   int i=0,x,tem;
   do{
      cout<<"1.Find the number si even odd \n2.Find the number is positive or negative.\n3.Find the person is adult or not.\n4.Exit."<<endl;
      cin>>x;
      switch (x) {
         case 1:
            cout<<"Enter the number=";
            cin>>tem;
            if(tem%2==0)cout<<"The number is even";
            else cout<<"The number is odd";
            continue;
         case 2:
            cout<<"Enter the number=";
            cin>>tem;
            if(tem<0)cout<<"negative number";
            else cout<<"positive number";
            continue;
         case 3:
            cout<<"Enter the age of the person=";
            cin>>tem;
            if(tem<18)cout<<"You are not an adult";
            else cout<<"You are an adult";
            continue;
         case 4:
            i=4;
            continue;
      }
   }
   while (i==4);
   return 0;
}