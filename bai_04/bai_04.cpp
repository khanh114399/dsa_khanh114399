#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, y, uc, bc;
	cin >> x >> y;
	int a = x, b = y;
	while(a*b != 0){
		if(a > b){
			a = a % b;
		}
		else{
			b = b % a;
		}
	}
	uc = a + b;
	bc = (x * y) / uc;
	cout << bc;
	return 0;
}
