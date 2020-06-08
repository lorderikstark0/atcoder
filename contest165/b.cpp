#include <iostream>
#include <cstdlib>
using namespace std;



int main(){
	int x ;
	cin >>x ;

	int money=100;

	for(int i=1;i<4000;i++){
		money=money*0.01;
		money =int(money);

		if(money>=x){
			cout << i <<"\n";
			_Exit(0);
		}

	}

	return 0;
}