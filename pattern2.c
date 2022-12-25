#include<stdio.h>
int main()
{
int i,j,a=0,n;
printf("enter number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",a+j);
    }
    a++;
    printf("\n");
}
return 0;
}