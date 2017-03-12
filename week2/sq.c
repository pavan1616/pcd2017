#include<stdio.h>
#include<math.h>
float square(float n)
 {
 float s=sqrt(n);
 return s;
}
int main()
 {
 float n,s;
 s=square(n);
 printf("enter the no.\n");
scanf("%f",&n);
printf("square root of %f=%f\n",n,s);
return 0;
}

