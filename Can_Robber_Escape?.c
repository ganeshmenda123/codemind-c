#include<stdio.h>
int main()
{
    int n,cnt=0,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            if(arr[i]%2==1) cnt++;
    }
    if(cnt>2) printf("NO");
    else printf("YES");
}