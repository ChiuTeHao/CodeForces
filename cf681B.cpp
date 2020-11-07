#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
typedef long long int LL;
int main()
{
    int kase;
    scanf("%d",&kase);
    char str[100000+10];
    LL dist[100000+10],blowmineid[100000+10];
    LL minestart[100000+10],mineend[100000+10];
    LL cost[100000+10];
    while(kase--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        scanf(" %s",str);
        int len=strlen(str),minecnt=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='1')
            {
                int ptr=i;
                minestart[minecnt]=i;
                while(str[ptr]=='1')
                {
                    mineend[minecnt]=ptr;
                    ptr++;
                }
                minecnt++;
                i=ptr-1;
            }
        }
        for(int i=0;i<minecnt-1;i++)
            dist[i]=minestart[i+1]-mineend[i]-1;
        for(int i=0;i<minecnt;i++)
        {
            cost[i]=a;
            blowmineid[i]=i;
            if(i==0)    continue;
            LL tmp=0;
            cost[i]+=cost[i-1];
            tmp+=(dist[i-1]*b+cost[i-1]);
            if(tmp<cost[i])
            {
                cost[i]=tmp;
                blowmineid[i]=blowmineid[i-1];
            }
        }
        if(minecnt>0)
            printf("%lld\n",cost[minecnt-1]);
        else
            printf("0\n");
    }
}
