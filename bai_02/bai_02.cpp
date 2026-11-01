#include<bits/stdc++.h>
using namespace std;

void sang(int n, vector<bool>& la_snt){
	la_snt[0] = false;
	la_snt[1] = false;
	for(int i=2; i * i <= n; i++){
		if(la_snt[i]){
			for(int j = i * i; j <= n; j += i){
				la_snt[j] = false;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	vector<bool> la_snt(n + 1, true);
	sang(n, la_snt);
	if(la_snt[n]){
		cout << "La so nguyen to";
	}
	else{
		cout << "Khong phai so nguyen to";
	}
}
