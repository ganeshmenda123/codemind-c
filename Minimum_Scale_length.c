#include<stdio.h>
int main()
{
    int lcm,i,j,gcd,n,min;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    lcm=arr[0];
    for(i=1;i<n;i++)
    {
        if(lcm<arr[i]) min=lcm;
        else min=arr[i];
        for(j=1;j<=min;j++)
        {
            if(lcm%j==0 && arr[i]%j==0) gcd=j;
        }
        lcm=gcd;
    }
    printf("%d",gcd);
}