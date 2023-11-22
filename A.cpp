#include <bits/stdc++.h>
//g++ -std=c++11 -O2 -Wall test.cpp -o test
//I am using c++ 11
typedef long long ll;
using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,i, j, k;
    bool idx = false;
    vector<int> v;
    cin>>n;
    for(i=1;i<=n;i++){
        v.push_back(i);
    }
   
    for(i=0; i<n-1;i++){
        for(j=i+1;(abs(v[i+1]-v[i]) == 1) && (j<n);j++){
                  
                if(abs(v[j]-v[i]) > 1){
                    
                    int temp = v[j];
                    v[j] = v[i+1];
                    v[i+1] = temp;
                    idx = true;
                
                    break;

                }
                   for(k=0; k<n; k++){
                        cout<<v[k]<<" ";
                    }
                    cout<<"\n";
                
            
            
        }
        if( j == n && (abs(v[i]-v[i+1]) == 1)){
            cout<<"NO SOLUTION\n";
            return 0;
        }
        idx = false;
    }
    for(i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}