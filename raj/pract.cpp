#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
    int T=7,ans=0,mul1,mul2;
	for(int i=1;i<=T;i++){
        
        if(i%3==0) {
            mul1=3*i;
            if(mul1%2==0) continue;
            cout<<mul1<<" ";
        }
        cout<<mul1<<" ";
	}
    
    return 0;
} 