#include<stdio.h>
#include<math.h>
float compute_sin(float x)
{
float term,sum,prev,diff;
int i;
term=sum=diff=x;
for(i=3;diff>0.0001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
float convert_radians(float d)
{
float rad;
rad=(3.1412/180)*d;
return rad;
}
int main()
{
float d,x,sum; 
printf("enter the degree\n");
scanf("%f/n",&d);
x=convert_radians(d);
sum=compute_sin(x);
printf("sin(%f)=%f",d,sum);
}
