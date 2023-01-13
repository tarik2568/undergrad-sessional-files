#include<bits/stdc++.h>
using namespace std;
int main(){
    int f[50], index[50], i, n, j, c, k, ind,count=0;
    for(i=0;i<50;i++) f[i]=0;
    x:cout<<"Enter the index block : ";
    cin>>ind;
    if(f[ind]!=1)
    {
    f[ind]=1;
    cout<<"Enter no of blocks needed for the index "<<ind<<" on the disk : ";
    cin>>n;
    cout<<"Enter "<<n<<" blocks for the index "<<ind<<" on the disk : ";
    }
    else
    {
    cout<<ind<<" index is already allocated"<<endl;
    goto x;
    }
    y:count=0;
    for(i=0;i<n;i++)
    {
        cin>>index[i];
        if(f[index[i]]==0)
        count++;
    }
    if(count==n)
    {
    for(j=0;j<n;j++)
        f[index[j]]=1;
        cout<<"Allocated \n";
        cout<<"File Indexed\n";
        for(k=0;k<n;k++)
        cout<<ind<<"-------->"<<index[k]<<" : allocated"<<endl;
    }
    else
    {
        cout<<"File in the index is already allocated"<<endl;
        cout<<"Enter another "<<n<<" file indexes"<<endl;
    goto y;
    }
    cout<<"Do you want to enter more file(Yes - 1/No - 0) : ";
    cin>>c;
    if(c==1)
    goto x;

}
