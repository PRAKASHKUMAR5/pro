#include<bits/stdc++.h>
using namespace std;
int check(string str[],int n)
{
    string s,s1,t,t1;
    for(int i=0;i<n-1;i++)
    {
        if(i<1)
        {
        s=str[i];s1=str[i+1];
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]==s1[j])
            t+=s[j];
            else
            {s1='\0';break;}
        }
        t1=t;
        }
        else
        {
            s=str[i+1];//cout<<s<<" ";
            for(int j=0;t1[j]!='\0';j++)
            {
                if(t1[j]==s[j])
                s1+=t1[j];
                else
                break;
            }
            t=s1;
        s1='\0';
        }
        
    }
   cout<<t;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    cin>>str[i];
    check(str,n);
    return 0;
}
