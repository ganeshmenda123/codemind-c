#include<stdio.h>
int main()
{
    long lcm,gcd,min,i,j,n;
    scanf("%d",&n);
    long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    lcm=arr[0];
    for(j=1;j<n;j++)
    {
        if(lcm<arr[j]) min=lcm;
        else min=arr[j];
        for(i=1;i<=min;i++)
        {
            if(lcm%i==0 && arr[j]%i==0) gcd=i;
        }
        lcm=(lcm*arr[j])/gcd;
    }
    printf("%ld",lcm);
}