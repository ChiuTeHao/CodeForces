#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef long long int LL;
const int maxn=30000+10;
LL nums[maxn],diff[maxn];
int main()
{
    int kase;
    scanf("%d",&kase);
    while(kase--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%lld",&nums[i]);
        diff[0]=nums[0];
        LL negativesum=0;
        for(int i=1;i<n;i++)
        {
            diff[i]=nums[i]-nums[i-1];
            if(diff[i]<0)
                negativesum+=abs(diff[i]);
        }
        if(negativesum<=diff[0])    printf("YES\n");
        else    printf("NO\n");
    }
}
