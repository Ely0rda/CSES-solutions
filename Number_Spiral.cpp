#include <bits/stdc++.h>
//g++ -std=c++11 -O2 -Wall s.cpp -o s
//I am using c++ 11
typedef long long ll;
using namespace std;

ll solution(ll y, ll x){
    ll r;
    if(y > x){
        if(y%2 == 1)
        r =  powl(y-1,2)+x;
        else
        r = powl(y,2)-x+1;
     
        

    }else{
       
        if(x%2 == 1)
        r =  powl(x,2)-y+1;
        else
        r = powl(x-1,2)+y;

    }
    return r;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

   ll n=0, y=0, x=0;
   cin>>n;
   for(int i=0; i<n; i++){
    cin>>y>>x;
    cout<<solution(y,x)<<"\n";
   }
    return 0;
}
/* 
following x:--------------------------
when to use it?
y > x
odd number---------------
start from: s = (y-1)^2+1
get result: r = s + x-1
order: increment 1 2 3
even number--------------
start from: s = y^2
get result: r = s -y + 1
order:  decrement 3 2 1


following y:--------------------------
when to use it?
y < x
odd number---------------
start from: s = x^2
get result: r = s -y +1
order: decrement 3 2 1
even number--------------
start from: s = (x-1)^2+1
get result: r = s + y -1
order:  increment 1 2 3
*/