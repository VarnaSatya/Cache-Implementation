#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void bin(int num,int *ad)       //reverse of binary equivalent
{
    for(int i=0;num>0||i<m;i++)
    {
        ad[i]=num%2;
        num=num/2;
        printf("%d",ad[i]);
    }
    /*
    int temp;
    for(int i=0;i<m/2;i++)
    {
        temp=ad[i];
        ad[i]=ad[m-i-1];
        ad[m-i-1]=temp;
    }
    // */
}
void read(int aDec)
{
    int *ad=(int*)malloc(sizeof(int)*m);
    bin(aDec,ad);

}

int main()
{
    read(3411);
}

