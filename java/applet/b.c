#include<stdio.h>


int main() {
	// your code goes here

	int ticker_number,no_of_passenger,arr_of_passenger[20],safe=0,areu_there=0;
	scanf("%d",&ticker_number);
	scanf("%d",&no_of_passenger);
	for(int i=0;i<no_of_passenger;i++)scanf("%d",&arr_of_passenger[i]);
	for(int i=0;i<no_of_passenger;i++){
	    for(int j=0;j<no_of_passenger;j++){
	        if(i!=j && safe==0){
	            if(arr_of_passenger[i]==arr_of_passenger[j]){
	                safe=1;
	                break;
	            }
	        }
	        
	    }
	    if(ticker_number==arr_of_passenger[i])areu_there=1;
       
	}
	if(safe==1&&areu_there==0)printf("NOT SAFE");
    else printf("SAFE");
	return 0;
	
}