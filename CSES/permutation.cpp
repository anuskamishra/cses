#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<"1\n";
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
    }
    else{
        vector<int>permutation;
        if(n%2==0){
            for(long long i=2;i<=n;i+=2){
                permutation.push_back(i);
            }
            for(long long i=1;i<=n;i+=2){
                permutation.push_back(i);
            }
        }
        else{
            for(long long i=2;i<=n;i+=2){
                permutation.push_back(i);
            }
            for(long long i=1;i<=n;i+=2){
                permutation.push_back(i);
            }
        }
        for(long long i : permutation){
            cout<< i << " ";
        }
        cout<<endl;
    }
    return 0;
}