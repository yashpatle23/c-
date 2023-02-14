#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num,query;
    cin>>num;
    cin>>query;
    int arr[num][100000];
    for(int i=0;i<num;i++){
        int size;
        for(int j=0;j<size;j++)cin>>arr[i][j];
    }
    for(int i=0;i<query;i++){
        int j,k;
        cin>>j>>k;
        cout<<arr[j][k]<<endl;
    }
    return 0;
}