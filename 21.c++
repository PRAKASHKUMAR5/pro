#include<iostream>
using namespace std;
int main()
{
    int l,c=0,c1=0,f=0,e=0,m;
    //clrscr();
    cout<<"Enter the limits"<<endl;
    cin>>l;
    int a[l];
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    m=l/2;
    if(l%2==0)
    {m--;}
    for(int i=0;i<l;i++)
    {
        if(i<=m)
        {
            f+=a[i];
            c++;
        }
        else
        {
            e+=a[i];
            c1++;
        }
    }
    f=f/c;
    e=e/c1;
    if(f==e)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
