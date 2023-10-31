#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using ll = long long;

void solve(){
 
  ll n; cin >> n;
  vector<ll> a(n+1);
  for(int i = 1 ; i <= n ; i++){
    cin >> a[i];
  }

// 1,2,3,4,5
// 6,5,3,4,4

 int f = 0;  
  for(int i = 1 ; i < n ; i++){
    if(a[i]>a[i+1]){
       if(i == 1 || i == 2 || i == 4 || i == 8 || i== 16 ) continue;
       
       else{
                 f=1; break;
       }
    }
  }

  if(f==0) cout << "YES\n";
  else cout << "NO\n";
 
}

int main(){
 
   int t; cin >> t;
   while(t--){
    solve();
   }
    return 0;
}
