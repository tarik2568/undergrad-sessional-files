#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,A[100],high=0,m;
    cout<<"Enter number of blocks : ";
    cin>>n;
    cout<<"Enter size of blocks : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    high=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>high)
        {
            high = A[i];
        }
    }
    cout<<"Enter size of process for allocation : ";
    cin>>m;
    if(m<=high)
    {
        cout<<m<<"k  block is allocated to "<<high<<"k block"<<endl;
    }
    else
    {
        cout<<"No Allocation"<<endl;
    }

return 0;
}
