#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter a,b,c values\n");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 printf("a is the greatest\n");
 else if(b>a && b>c)
      printf("b is the gereatest\n");
 else
      printf("c is the greatest\n");
}
   
