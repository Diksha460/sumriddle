#include<iostream>
using namespace std;
int main()
{
    int tc,b[100],k=0,i;
    cin>>tc;
    while(tc--)
    {
        double n,l,r,c,s=0;
        cin>>n;
        if(n==1)
        {
            l=0;
            r=1;
            break;
        }
        l=1;
        for(i=l;i<=n;i++)
        {
            s=s+i;
            if(s==n)
            {
                r=i;
                break;
            }
            if(s>n)
            {
                r=i;
                c=s-n;
                l=(-1)*c;
                break;
            }
        }
        b[k]=l;
        k+=1;
        b[k]=r;
        k+=1;
    }
    for(i=0;i<k;i+=2)
      cout<<b[i]<<" "<<b[i+1]<<endl;
    return 0;
}