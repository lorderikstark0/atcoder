#include <bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin >> t;
  vector<int> arr;
  while(t-->0){
    int a;
    cin >> a;
    for(size_t i=0;i<a;i++){
      int k;
      cin >> k;
      arr.push_back(k);
    }
    cout << arr[0]<<"\n";
  }
  return 0;
}
