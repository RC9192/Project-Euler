#include<bits/stdc++.h>
using namespace std;

int prod(int N){
    int a,b,c,p=-1;
    if(N%2==0){
    for(c=N/3;c<N;c++){
        int un= c*c+2*c*N-N*N;
        if(un>=0){
            un=sqrt(un);
            a= (un-c+N)/2;
        b= (N-c-un)/2;
        if((a+b+c==N) && (a*a+b*b==c*c) && a!=b && a<c && b<c &&a>0 && b>0 && a*b*c>p){
            p=a*b*c;
        }
        }
    }
    }
    return p;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<prod(n)<<endl;
    }
    return 0;
}
