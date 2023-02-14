
#include<stdio.h>
#include<conio.h>

int main(){
	int n,sum=0,i;
    printf("enter nth number of series  ");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		sum=sum+i;
	}
	printf("sum of %d number is %d" ,n,sum);
    return 0;
}