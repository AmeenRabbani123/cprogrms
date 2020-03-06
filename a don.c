
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum of two numbers =%d",c);
}


#include<stdio.h>
int main()
{
int area,perimeter,l,b,h;
printf("enter the value of l,b,h");
scanf("%d" "%d""%d",&l,&b,&h);
area=(0.5*(b*h));
perimeter=(l+b+h);
printf("area of triangle=%d\n",area);
printf("perimeter of triangle=%d\n",perimeter);
}



#include<stdio.h>
int main()
{
int area,circum,r;
printf("enter the value of r\n");
scanf("%d",&r);
area=3.14156*r*r;
circum=2*3.14156*r;
printf("area of circle=%d\n",area);
printf("circum of circle=%d\n",circum);
}



#include<stdio.h>
int main()
{
int a,b,sum,diff,prod,div;
printf("enter the value of a,b\n");
scanf("%d" "%d",&a,&b);
sum=a+b;
diff=a-b;
prod=a*b;
div=a/b;
printf("sum of a and b=%d\n",sum);
printf("diff of a and b=%d\n",diff);
printf("prod of a and b=%d\n",prod);
printf("div of a and b=%d\n",div);
}


#include<stdio.h>
int main()
{
int a,b,c,d,e,t,av;
printf("enter the marks of the subjects a,b,c,d,e\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
t=a+b+c+d+e;
printf("total of the marks of the subjects %d\n",t);
av=t/5;
printf("average of the marks of the subjects %d\n",av);
}

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("before swapping\n");
printf("a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("after swapping\n");
printf("b=%d a=%d",b,a);
}


#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,z,i;
printf("enter the values of a,b,c,d\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
z=(a-b)*(a-b)+(c-d)*(c-d);
i=sqrt(z);
printf("i=%d",i);
}


#include<stdio.h>
int main()
{
int a,b,c,t;
printf("enter the value of a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
t=0.5*b*c;
printf("area of triangle t=%d\n",t);
}


#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r;
float emi,x,z,y;
printf("enter the value of p,t,r\n");
scanf("%d%d%d",&p,&t,&r);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("z=%f",z);
printf("y=%f",y);
printf("x=%f",x);
printf("emi=%f",emi);
}



































