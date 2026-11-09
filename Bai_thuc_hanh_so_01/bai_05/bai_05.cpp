#include<bits/stdc++.h>
using namespace std;

int ktra(int N){
    if(N<=0) return 0;
    int S=0;
    for(int i=1;i<=N/2;i++)
        if(N%i==0)
            S+=i;
    if(S==N) return 1;
    return 0;
}
//Neu N=20 ham tra ve 0
//Neu N=28 ham tra ve 1
//Neu N=-9 ham tra ve 0 
//Neu N=6 ham tra ve 0
