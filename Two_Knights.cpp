#include <bits/stdc++.h>
//g++ -std=c++11 -O2 -Wall s.cpp -o s
//I am using c++ 11
typedef long long ll;
using namespace std;

ll solution(ll k){
    if(k == 1)
    return 0;
    if(k == 2)
    return 6;
    
    ll cr2 = 1, n=0, cr3 = 1;
    n = k;
    n -= 2;
    while(n>0){
        n = n+1-2;
        cr2++;
    }
    n = k;
    n -= 3;
    while(n>0){
        n = n+2-3;
        cr3++;
    }
    ll nap = cr2*cr3*2*2;
    //you can replace nap with this formula  ll nap = (k-1)*(k-2)*2*2;
    
    ll r = k*k*(k*k-1)/2;
    // cout<<"cr2="<<cr2<<"cr3="<<cr3<<" nap: "<<nap<<" r: "<<r<<" ";


    return r-nap;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<solution(i)<<"\n";
    }
    
   
    return 0;
}

/*
- The formula for calculating the number of
positions to pieces can take in a k*k chessboard
F = k*k*(k*k-1)/2;
- You can get this formula using combination without repetition because order is not important
- The knight attack works in a 2x3 rectangle, In a 2x3 rectangle a knight can perform two attacks
- The idea here is to calculate how many 2x3 rectangles exists in a kxk square, by knowing that we can know how many possible attacks a knight can perform on another knigh
- Calculating how many 2x3 rectangles exists in a kxk
suppose k=5
A  - is the square side 
- - - - -
- -
  - -
    - -
      - -
There are 4 of 2 sides in a 5 sides
- - - - -
- - -
  - - -
    - - -
There are 3 of 3 sides in a 5 sides
An algorithme to calculate it is example 2 sides
The first iteration is done out of while because we don't need to add 1 to it.
cr = 1
k -= 2
while(k>0){
  k = k+1-2
}
|
|   |
| | |   | 
| | | | |   |
| | | | | | | 0
Every time we substrat -2 and we add 1 why one because after adding 1 it is like we just substract - 1, and we start calculating how many 2 sides exist in k-1
We calculate how many sides 2 cr2 and how many sides 3 than we multiply the result by 2 because each side can have 2 and 3 sides
We multiply again by 2 because at each 2x3 rectangle the knight have to positions to attack

*/
