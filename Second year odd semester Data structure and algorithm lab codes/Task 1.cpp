#include<iostream>
#include<ctime>
clock_t begin=clock();
using namespace std;
int main(){
    int A[30],n,i,a;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter value for searching : ";
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(A[i]==a)
        {
            cout<<"Found at "<<i+1<<endl;
        }
    }

clock_t end=clock();
double tot_time=double(end-begin)/CLOCKS_PER_SEC;
cout<<"Time : "<<tot_time<<"s"<<endl;

return 0;
}
