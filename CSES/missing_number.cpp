#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long total_sum = n*(n+1)/2;
    long long sum = 0;
    for(long long i=1; i<n; i++){
        long long num;
        cin>>num;
        sum += num;
        cout<< total_sum - sum;
    }

}