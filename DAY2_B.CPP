#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

void solve(){

 int n , m;
 cin >> n >> m;
 string s , t;
 cin >> s >> t;

 int f = 0;
 for(int i = 0 ; i < n-1 ; i++){
    if(s[i] == s[i+1]) { f= 1 ; break; }
 }
 if(f == 0){
    cout << "Yes\n";
 }
 else{
    int f1 = 0;
    for (int i = 0; i < m-1 ; i++){
        if(t[i] == t[i+1]){ f1 = 1; break; }
    }
    if(f1 == 1){ cout << "No\n"; }
    else{
        
        for(int i = 0 ; i  < n-1 ; i++){
            if(s[i] == s[i+1]){
                if(t[0] == s[i] || t[m-1] == s[i]){
                    cout << "No\n"; f1 = 1; break;
                }
            }          
        }

        if(f1 == 0) cout << "Yes\n";
    }
 }
}

int main(){
 
   int t; cin >> t;
   while(t--){
    solve();
   }
    return 0;
}
