#include<stdio.h>
int main()
{
int i,n;
int sum=0;
int a[100];
printf("\n enter the no of integer u want u add:");
scanf("%d",&n);
printf("\n enter %d integers:",n);
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\n sum of entered integers=%d\n",sum);
return 0;
}

