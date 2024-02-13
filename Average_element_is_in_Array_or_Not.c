#include<stdio.h>
int main()
{
    int n,i,flag=0;
    int sum=0,avg;
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
    avg=sum/n;
    for(i=0;i<n;i++)
    {
    if(arr[i]==avg)
    {
        flag=1;
    }
}
if(flag==1)
{
    printf("True");
}
else
{
    printf("False");
}
}