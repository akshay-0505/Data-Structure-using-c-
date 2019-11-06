#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,k;
    cout<<"Enter No of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elemnts in array:"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int min,tmp;
    for(i=1;i<n;i++)
    {
        min=arr[i];
        for(j=i-1;j>=0&&arr[j]>min;j--)
        {
            arr[j+1]=arr[j];
                     
        }
        arr[j+1]=min;
        
        cout<<endl<<"pass"<<i+1<<" is:"<<endl;     
        for(k=0;k<n;k++)
        {
            cout<<arr[k]<<"  ";
          }
    }
        
        cout<<endl<<"Sorted array is:"<<endl;     
        for(i=0;i<n;i++)
            cout<<arr[i]<<"  ";

    return 0;
}

