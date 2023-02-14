#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
#define PI 3.14159
using namespace std;

int main(){
	float x,y,z;
	printf("enter two number ");
	scanf("%f %f",&x,&y);
	if(x<=y){
		z=(x/y)*100;
		printf("percentage of two number is %f",z);
	}
	else{
		z=(y/x)*100;
		printf("percentage of two number is %f",z);
	}


}