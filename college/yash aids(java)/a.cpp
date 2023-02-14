#include <iostream>
using namespace std;
int main() {
	int num,string_len,opperation,type, index;
	string name;
	cin >> num;    //Reading input from STDIN
	for(int i=0;i<num;i++){
		cin>>string_len;
		cin>>opperation;
		cin>>name;
		for(int j=0;j<opperation;j++){
			cin>>type;
			cin>>index;
			if(type==1){
					 for (int z = index; z < (string_len-x)/2; z++)
        					swap(str[index], str[num - index - 1]);
			}
			else if(type==2){
				name[index]++;
			}
		}
	}

}