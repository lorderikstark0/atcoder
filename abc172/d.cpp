#include <bits/stdc++.h>
using namespace std;

//not solved will give overflow 
vector<int> posdiv(int n){
  vector<int> arr2;
  for(int i=2;i<=n;i++){
    if(n%i==0){
      arr2.push_back(i);
    }
  }
  return arr2;
}
int main(){
  int n ;
  cin >> n ;
    vector<int> arr;
  for(int i=1;i<=n;i++){
        arr.push_back(i);
  }
    
  vector<vector<int>> arr3;

  for(size_t i=0;i<arr.size();i++){
      arr3.push_back(posdiv(arr[i]));
  }



  return 0;
}
