#include <bits/stdc++.h>
#define pb push_back 

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n ;
	cin >> n;
	int p =n %10;
	string q;
	switch(p){
		case 0:q="pon";break;
		case 1:q="pon";break;
		case 3:q="bon";break;
		case 6:q="pon";break;
		case 8:q="pon";break;
		default: q ="hon";break;
		
	}
	cout << q <<"\n";


	return 0;
}


