#include<iostream>
#include<ctime>
clock_t begin=clock();
using namespace std;
int main(){
    int A[30],n,beg,mid,e,i,j,a,temp;
    //inserting
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    //sorting
    cout<<"Sorted Array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    //searching
    cout<<"Enter value for searching : ";
    cin>>a;
    beg=0;
    e=n;
    mid=(beg+e)/2;
    while(beg<=e)
    {
        mid=(beg+e)/2;
        if(a==A[mid])
        {
            cout<<"Found at "<<mid+1<<endl;
            break;
        }
        else if(a<A[mid])
        {
            e=mid-1;
        }
        else
        {
             beg=mid+1;
        }
    }
clock_t end=clock();
double tot_time=double(end-begin)/CLOCKS_PER_SEC;
cout<<"Time : "<<tot_time<<endl;


return 0;
}
