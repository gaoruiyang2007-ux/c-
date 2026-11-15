#include <stdio.h>
int r(int a){
	int b=0;
	for(;a>0;){
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}
int sushu(int a){
	int i,n;
	for(n=2;n<a;n++){
		if(a%n==0)
		return 0;
	}
	return 1;
} 
int absolute(int x)
{	if(sushu(x)&&sushu(r(x)))
	return 1;
	else
	return 0;	
	 
}

int main (void){
	int start,end;
	scanf("%d %d",&start,&end);
	for(;start<=end;start++)
	{
		if(absolute(start))
		printf ("%d\n",start);
	}
}
