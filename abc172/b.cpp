#include <bits/stdc++.h>
using namespace std;


int main(){
  string s,t ;
  cin >> s >> t;

  //choose one char of s and replace with different character 
  int ops=0;
  vector<char> v(s.begin(),s.end());
    
  vector<char> v1(t.begin(),t.end());

  for(size_t i=0;i<v.size();i++){
    if(v[i]!=v1[i]){
        v[i]=v1[i];
      ops++;
    }
    
  }
cout << ops <<"\n";
return 0;

  

}
