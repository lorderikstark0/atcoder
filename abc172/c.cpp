#include <bits/stdc++.h>
using namespace std;

//not completed not able to decide how to dequeue from them i.e in which order 
int main(){

    int n,m k;
    cin >> n >> m >> k;
    vector<int> arr1;
    vector<int> arr2;
    while(n--){
        int a;
        cin >> a ;
        arr1.push_back(a);
    }
    sort(arr1.begin(),arr1.end(),greater<>());
    while(m--){
      int b;
      cin >> b;
      arr2.push_back(b);
    }
    sort(arr2.begin(),arr2.end(),greater<>());
     int sum1=0;
      int sum2=0;
    for(size_t i=0;i<arr1.size();i++){
        sum1+=i;
    }
    for(size_t i=0;i<arr2.size();i++){
      sum2+=i;
    }
    int count=0;
    for(size_t i=0,j=0;i<arr1.size(),j<arr2.size();i++,j++){      
      
    }
      


    return 0;
}
