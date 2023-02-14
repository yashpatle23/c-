#include<iostream>
using namespace std;

int main(){
	int* pc, c;
c = 5;
pc = &c;
*pc = 1;
printf("%d\n", *pc);  // Ouptut: 1
printf("%d", c); 
}