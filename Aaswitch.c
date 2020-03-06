#include<stdio.h>
void main()
{ 
 int a,b,ch;
 printf("enter a,b values\n");
 scanf("%d %d",&a,&b);
 printf("1.add\n");
 printf("2.sub\n");
 printf("3.mul\n");
 printf("4.div\n");
 printf("enter your ch\n");
 scanf("%d",&ch);
switch(ch)
 {
  case 1:
        printf("%d\n",a+b);
  case 2:
         printf("%d\n",a-b);
  case 3:
        printf("%d\n",a*b);
  case 4:
           printf("%d\n",a/b);
   break;
   default:
          printf("nothing");
}
}
