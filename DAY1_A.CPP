#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

void solve(){

  unordered_map<int,int> mp;
  int n; cin >> n;
  
  vector<int> v1(n);
  for(int i = 0; i < n ; i++){
    cin >> v1[i];
    mp[v1[i]]++;
  }

 if(mp.size() == 1)
    cout << "Yes\n";
 
 else if(mp.size() == 2){
     int f = 0; int arr[3]; int i = 0;
     for(auto x : mp){
       arr[i] = x.second;
       i++;
    }

  if(abs(arr[0]-arr[1]) <= 1) cout << "Yes\n";
  else cout << "No\n";
 }
 
 
 else
    cout << "No\n";

}

int main(){
 
   int t; cin >> t;
   while(t--){
    solve();
   }
    return 0;
}
