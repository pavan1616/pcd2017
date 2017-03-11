#include<stdio.h>
#include<math.h>
float square(float n)
{
float diff,a,b;
a=n/2;
b=n/a;
diff=fabs(a-b);
while (diff>0.001)
{
a=(a+b)/2;
b=n/a;
diff=fabs(a-b);
}
return a;
}
int main()
{
float s,n;
printf("enter the value");
scanf("%f",&n);
s=square(n);
printf("square root of a no. %f=%f",n,s);
return 0;
}

