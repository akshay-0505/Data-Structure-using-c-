#include<iostream>
#include<string>
using namespace std;
class str
{
    string a,b,c,r,s1,s2,s3,ss;
    int i,ct,n,j,len,k;
    public:
    void length()
    {	cout<<"\n\n...Length of string...\n\n";
        ct=0;
        cout<<"ENter string=\n";

        cin>>a;
        for(i=0;a[i]!='\0';i++)
            {
                ct++;
            }
        cout<<"Length of string=\t"<<ct;
    }
    void concat()
    {	cout<<"\n\n...ConCatination Operation...\n\n";

        cout<<"\nEnter string 1=\t";
        cin>>b;
        cout<<"\nEnter string 2=\t";
        cin>>c;
        cout<<"\nYour entered strings are=\n"<<b<<"\n"<<c;
        n=0;
        for(i=0;b[i]!='\0';i++)
        {
            r[n]=b[i];
            n++;
        }
        for(j=0;c[j]!='\0';++j)
        {
            r[n]=c[j];
            n++;
        }
        cout<<"\nResultant string=\t\t";//<<r;
        for(i=0;r[i]!='\0';i++)
        {
                    cout<<r[i];
        }
    }
    void  copy()
    {
        cout<<"\n\n***---Copy operation---***\n\n";
        cout<<"\nEnter string=\t";
        cin>>s1;
        ct=0;
        for(i=0;s1[i]!='\0';i++)
            {
                ct++;
            }

        for(i=0;i<ct;i++)
                    {
                        s2[i]=s1[i];
                    }
            cout<<"\nCopied string=\t";

            cout<<s2;
    }
    void rev()
    {
        cout<<"***---Reverse Operation---***";
        cout<<"\n\nEnter string=";
        cin>>s3;
        ct=0,k=0;
        for(i=0;s3[i]!='\0';i++)
        {
                        ct++;
        }
        for(i=ct-1;i>=0;i--,k++)
        {
            ss[k]=s3[i];
        }
        cout<<"\n reversed=";

        for(i=0;i<k;i++)
        cout<<ss[i];
    }
    void eq()
    {	cout<<"***---Comparing  Operation---***";
        cout<<"\nEnter string 1=";
        cin>>s1;
        cout<<"\nEnter string 2=";
        cin>>s2;
        if(s1==s2)
        {
            cout<<"\nString are SAme..!!";
        }
        else
        {
            cout<<"\nSrting are NOT same..!!";
        }

    }
    void sub()
    {
        cout<<"\n***---Substring  Operation---***";
        cout<<"\n\nEnter string=";
        cin>>a;
        int m=0;
        cout<<"\nEnter a string=";
        cin>>b;
        for(i=0;a[i]!=NULL;i++)
        	{
        			if(a[i]==b[0])
        		{
        			for(j=1;b[j]!=NULL;j++)
        			{
        				if(a[i+j]!=b[j])
        				{
        					break;
        				}
        			}
        			if(b[j]==NULL)
        			{
        				i=i+j-1;
        				m++;
        			}
        		}
        	}
        		if(m==0)
        		{
        			cout<<"\nSubstring not present\n";
        		}
        		else
        		{
        			cout<<"\t"<<b<<" is repeated "<<m<<" times";
        		}
        }
};
   int main()
{
    str s;
    char ans;
    int ch;
    do

    {
        cout<<"\t\tMEnu\n\n";
        cout<<"1)Length\n2)ConCatination\n3)reverse\n4)equality\n5)substring\n6)copy\n\nenter your choice (1-6)=\t";
        cin>>ch;
        switch(ch)
        {
            case 1 :s.length(); break;
            case 2 :s.concat();	break;
            case 3 :s.rev();	break;
            case 4 :s.eq();		break;
            case 5 :s.sub();	break;
            case 6 :s.copy();	break;
            default:cout<<"\n wrong selection..!!\n";
        }
    cout<<"\n\n want try more operation(Y/N)=";
    cin>>ans;
    }while(ans=='Y'||ans=='y');
    return 0;
}