#include<stdio.h>
int main()
{
    int n;
    printf("enter order of materix");
    scanf("%d",&n);
    int a[n][n],i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element of materix:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
}