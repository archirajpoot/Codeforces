// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters.
//  On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones.
//  Each flagstone is of the size a × a.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    int tiles_length=(n+a-1)/a;
    int tiles_breath=(m+a-1)/a;
    int tiles_total=tiles_length*tiles_breath;
    cout<<tiles_total;
    return 0;
    
}