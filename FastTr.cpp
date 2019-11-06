#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int nr,nc,nz,i,j;
    cout<<"Enter No of rows:"<<endl;
    cin>>nr;
    cout<<"Enter No of cols:"<<endl;\
    cin>>nc;
    cout<<"Enter No of non zero elements:"<<endl;
    cin>>nz;
    int sp[nz+1][3],sp2[nz+1][3];
     int count[nc],stIn[nc];
    sp[0][0]=nr;
    sp[0][1]=nc;
    sp[0][2]=nz;
    cout<<"Enter values in sparse mat";
    for(i=1;i<=nz;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>sp[i][j];
        }
    }
    
   
    
    for(i=0;i<nc;i++)
        count[i]=0;
 
  //  cout<<"HEllo"<<endl;
        
    for(i=1;i<=nz;i++)
        count[sp[i][1]]++;
        
  //   cout<<"HEllo1"<<endl;
        
        stIn[0]=1;
        
    for(i=1;i<nc;i++)
        stIn[i]=stIn[i-1]+count[i-1];
    
  //  cout<<"HEllo2"<<endl;
    sp2[0][0]=nc;
    sp2[0][1]=nr;
    sp2[0][2]=nz;
    for(i=1;i<=nz;i++)
    {
        j=stIn[sp[i][1]];
        
        
        sp2[j][0]=sp[i][1];
        sp2[j][1]=sp[i][0];
        sp2[j][2]=sp[i][2];
        stIn[sp[i][1]]++;
    }
    
   // cout<<"HEllo4"<<endl;
    
    cout<<"Matrix is:"<<endl;
    for(i=0;i<=nz;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sp2[i][j]<<" ";
        }
        cout<<endl;
     }    
        

    return 0;
}
