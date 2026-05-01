#include <bits/stdc++.h>
using namespace std;
int main(){
int num=0;
int n;
cin>>n;
for(int i=0;i<n;i++){
 string str;
 cin>>str;
 if(str[1]=='+'){
    num++;
 }else{
    num--;
 }
}
cout<<num;
return 0;
}