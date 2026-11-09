#include<bits/stdc++.h>
using namespace std;
int main(){
	float a, b, c;
	cin >> a >> b >> c;
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout << "VSN";
				return 0;
			}
			else{
				cout << "VN";
				return 0;
			}
		}
		else{
			float x = -c / b;
			cout << x;
			return 0;
		}
	}
	else{
		float delta = b * b - 4 * a * c;
		if(delta < 0){
			cout << "VN";
			return 0;
		}
		else if(delta == 0){
			float x = -b / (2 * a);
			cout << x;
			return 0;
		}
		else{
			float x1 = ( -b - sqrt(delta) ) / ( 2 * a);
			float x2 = ( -b + sqrt(delta) ) / ( 2 * a);
			cout << x1 << " " << x2;
			return 0;
		}
	}
	return 0;
}
