#include <stdio.h>
int main()
{ int a,b,i,sum=0;
 scanf("%d",&i);
 while (i--)
 { scanf("%d%d",&a,&b);
   sum=a+b;
   printf("%d\n",sum);
 }
  return 0;
}