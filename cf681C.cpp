#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<utility>
#include<algorithm>
using namespace std;
const int maxn=2000000+10;
pair<int,int> ps[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int kase;
    scanf("%d",&kase);
    while(kase--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&ps[i].first);
        for(int i=0;i<n;i++)
            scanf("%d",&ps[i].second);
        sort(ps,ps+n);
        int maxdeltime=0;
        long long int taketime=0,ans=ps[n-1].first;
        for(int i=n-1;i>=0;i--)
        {
            ans=min(ans,max(static_cast<long long >(ps[i].first),taketime) );
            taketime+=ps[i].second;
        }
        ans=min(ans,taketime);
        printf("%lld\n",ans);
    }
    return 0;
}
