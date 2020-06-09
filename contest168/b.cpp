#include <bits/stdc++.h>
using namespace std;

#define pb push_back


int main(){
    int k;
    string s;
    cin >> k ;
    cin >> s;
    if(s.length() <= k){
        cout << s <<"\n";
    }
    else{
       //selecting only the first k chars 
        s=s.substr(0,k);
        s.append("...");
        cout << s<<"\n";
    }
        
    return 0;
}
