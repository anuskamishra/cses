#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for(long long i=1; i<=n; i++){
    long long totalways = ((i*i) * (i*i-1))/2;
    long long attackways = 4*(i-1)*(i-2);
    cout << totalways - attackways<<endl; 
    }
    return 0;
}