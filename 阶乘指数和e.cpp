#include <stdio.h>
#include <math.h>
double xisu(double a,double q,int n){
	int i;
	if (n<=0)
	return 0;
	double term=a;
	double sum=0.0;
	for(i=0;i<n;i++){
		sum+=term;
		term=term*q;
	}
	return sum;
}
int jiecheng(int a){
	int i=0,b=1;
	if(a==0)
	{
		b=1;
		return b;
	}
	else
	{
		for(i=0;i<=a;i++)
		{
			b=b*i;
		}
		return b;
	}
}

//e^x=x^n-1*(n-1)!*x/n
double zhishu(int a){
	double sum=0;
	double term=1;
	int i=1;
	for(;term>0.000001;) {
		sum=sum+term;
		term=term*a/i;
		i++;
	}
	return sum;
}
int main(void){
	int x=0;
	scanf("%d",&x);
	printf("%lf",zhishu(x));
	printf("%d",jiecheng(0));
	return 0;
}
