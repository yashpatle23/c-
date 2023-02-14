
#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,k,l,m;
	for(i=1; i<=4;)
	{
	    for(j=3; j>=i; j--){
	    	printf("  ");
	    }
	    m=2*i-1;
	    	for(k=0; k<m; k++)
	    	{
	    		l=k+1;
	    		printf("%d ",l);	
		    }
		printf("\n");
		 i++;
    }

}