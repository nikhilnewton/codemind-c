#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/(n*1.0);
    printf("%.2f",avg);
}