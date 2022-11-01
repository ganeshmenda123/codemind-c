#include<stdio.h>
int main()
{
    long hcf,n,i,j,min,gcd;
    scanf("%ld",&n);
    long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    hcf=arr[0];
    gcd=arr[0];
    for(j=1;j<n;j++)
    {
        if(hcf<arr[j]) min=hcf;
        else min=arr[j];
        for(i=1;i<=min;i++)
        {
            if(gcd%i==0 && arr[j]%i==0) hcf=i;
        }
        gcd=hcf;
    }
    printf("%ld",hcf);
}