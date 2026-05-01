#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n;
int arr[n];
cin>>k;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<n;i++){
    if(arr[k-1]<=arr[i] && arr[i]>0){
        count++;
    }
}
cout<<count;
return 0;
}