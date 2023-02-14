
#include<stdio.h>
#include<conio.h>

int main(){
	int x,y=2,z;
	printf("enter the number : ");
	scanf("%d",&x);
	if(x==1 || x==2){
		printf("not prime nor composite");
	
	}
	 
    else if(x>y){
	z=x%y;
	if(z==0){
		printf("not prime");
	}
	
	while(z!=0) {
		if(y==x){
				break;
			}
		z=x%y;
		if(z==0){
			printf("not prime");
			break;

		}

		y=y+1;
	}
   
	if(z!=0){
			printf("prime");
		}
	}
	
	
	

}