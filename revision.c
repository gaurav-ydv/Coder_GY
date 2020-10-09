#include <stdio.h>
int add( int a, int b)
{ return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int mod(int a, int b)
{
	return a%b;
}
int expo( int a,int b)
{ return a*expo(a,b-1);
}
float sq(int a)
{float sqrt=a/2;
	int temp=0;
while(sqrt!=temp)
{ temp=sqrt;
	sqrt=(a/temp +temp)/2;

}
return sqrt;
}
int main()
{printf("%f\n",sq(25));
printf("%f\n",sq(400));
printf("%f\n",sq(1234));


}