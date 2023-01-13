#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i=0,N,D,Limit[5],Base[5],Result=0;

    cout<<"Enter segment number : "<<endl;
    cin>>a;
    cout<<"Enter limit and base : "<<endl;
    for(i=0;i<a;i++){
        cin>> Limit[i] >> Base[i];
    }

    cout<<"Enter segment no : ";
    cin>>N;

    cout<<"Enter segment offset : ";
    cin>>D;

    N=N-1;
    if(D <= Limit[N]){
        Result = D + Base[N];
        cout<<Result<<endl;
    }
    else{
        cout<<"Addressing Error";
    }


return 0;
}
