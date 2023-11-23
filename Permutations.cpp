#include <bits/stdc++.h>
//g++ -std=c++11 -O2 -Wall test.cpp -o test
//I am using c++ 11
typedef long long ll;
using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if (n == 1){
        cout<<n;
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n%2 == 0){
        for(int i=2; i<=n; i +=2)
            cout<<i<<" ";
        for(int i=1; i<n; i+=2)
            cout<<i<<" ";    
    }else{
        for(int i=1; i<=n; i +=2)
            cout<<i<<" ";  
        for(int i=2; i<n; i+=2)
            cout<<i<<" ";   

    }
    

    return 0;
}