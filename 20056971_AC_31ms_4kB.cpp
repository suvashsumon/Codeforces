#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define maxn 111
int n,m,a[maxn];
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            m-=a[i];
            ans++;
            if(m<=0)break;
        }
        printf("%d\n",ans);
    }
    return 0;
}