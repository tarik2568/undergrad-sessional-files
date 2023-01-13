#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,A[20],high=0,m,block;
    cout<<"Enter number of blocks : ";
    cin>>n;
    cout<<"Enter size of blocks : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter size of process for allocation : ";
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(m<=A[i]){
            block = A[i];
            break;
        }
    }
    cout<<m<<"k block will be allocated to "<<block<<"k block"<<endl;




return 0;
}

