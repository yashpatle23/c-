#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
#define PI 3.14159
using namespace std;

int main(){
	float ;
	printf("enter the total price :");
	scanf("%f",&x);
	cout<<x;
	if(x>2500){
        x=0.75*x;
        printf("final prize after discount : %f",x);
	}
	else if(x>500){
		   x=0.7*x;
        printf("final prize after discount : %f",x);
	}
	else{
		   x=0.6*x;
        printf("final prize after discount : %f",x);
        cout<<endl;
	}
	cout<<x;

	

	


}