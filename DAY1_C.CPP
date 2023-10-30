#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <queue>

void solve(){

 int n ;
 cin >> n ;
 string s ;
 cin >> s ;
 
 if(n % 2 != 0){
  cout << "-1\n"; return;   
 }
 deque<char> dq(s.begin() , s.end());
 
 vector<int> indexes;
 int cnt = 0 , lr = 0;
 while(!dq.empty()){
    if(dq.front() != dq.back()){
        dq.pop_front();
        dq.pop_back();
        lr++;
    }
    else{
        cnt++;
        if(cnt > 300){ cout << "-1\n"; return; }

        if(dq.front() == '0'){
            indexes.push_back(lr+dq.size());
            dq.push_back('0');
            dq.push_back('1');
            
        }
        else{
            dq.push_front('1');
            dq.push_front('0');
            indexes.push_back(lr);
        }
    }
 }

 cout << cnt << endl;
 for(int i : indexes)
  cout << i << " ";
 
 cout << endl;
}

int main(){
 
   int t; cin >> t;
   while(t--){
    solve();
   }
    return 0;
}
