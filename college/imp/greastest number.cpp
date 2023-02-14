#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
#define PI 3.14159
using namespace std;

int main(){
	int x,y,z;
	printf("enter the three number : ");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y &&y>z){
		printf("the greatest number is %d",x);
	}
	if(y>x &&y>z){
    printf("the greatest number is %d",y);
	}
	if(z>y &&z>x){
		printf("the greatest number is %d",z);
	}
	
	

	


}