#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<map>
using namespace std;
int main()
{
    int n,kase;
    scanf("%d",&kase);
    while(kase--)
    {
        int base=2;
        int ans[400];
        scanf("%d",&n);
        bool first=true;
        for(int i=2*n;i<4*n;i+=2)
        {
            if(first==false) printf(" ");
            else    first=false;
            printf("%d",i);
        }
        printf("\n");
    }
}
