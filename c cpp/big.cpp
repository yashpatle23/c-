#include <iostream>
using namespace std;
int main() {
	int num,tem=0;
	string so,n,ans;
	cin >> num;
	cin>> so;    //Reading input from STDIN
	if (so.find('.')!=){
		cout<<"YES\n";// Writing output to STDOUT
		for(int i=0;i<so.length();i++){
			if(so[i]=='H') {
				n.push_back('H');
				tem++;
			}
			else n.push_back('B');
            
			if (tem==2){
				if(n.length()>=ans.length()) {
                    ans.clear();
                    ans=n;
                    n.clear();
                    tem=1;
                }
			}
            else {
                if(n.length()>=ans.length()) {
                    ans.clear();
                    ans=n;
            }
            }
			
		}
		cout<<ans;
	
	}
	else cout<<"NO";	
}
