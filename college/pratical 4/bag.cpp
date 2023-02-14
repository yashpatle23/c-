#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
#define PI 3.14159
using namespace std;

int main(){
	int chice,i=1;
	float x,y,z;
	while(i=1){
		printf(" Enter 1 to display nmax no 3 number. \n Enter 2 to display final prize program.\n Enter 3 to display percentage of 2nd numberto 1st numberentered by user. \n Enter 4 to EXIT.\nEnter your choice.");
	scanf("%d",&chice);
	switch(chice)
	{
		case 1:
		{
			
	printf("Enter the three number : ");
	scanf("%f %f %f",&x,&y,&z);
	if(x>y &&y>z){
		printf("The greatest number is %f",x);
	}
	if(y>x &&y>z){
    printf("The greatest number is %f",y);
	}
	if(z>y &&z>x){
		printf("The greatest number is %f",z);
		}
		break;

	}
	case 2:
	{
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
	break;

	}
	case 3: 
	{
		printf("enter two number ");
	scanf("%f %f",&x,&y);
	if(x<=y){
		z=(x/y)*100;
		printf("percentage of two number is %f",z);
	}
	else{
		z=(y/x)*100;
		printf("percentage of two number is %f",z);
		break;
	}
	}
	case 4:
	{
		exit(1);
	}
	
	}
	printf("\n\n Press 1 to continue or any other number to Exit");
	scanf("%d",&i);
	if (i!=+1){
		exit(1);
	}
	
	}
	
	

	


}