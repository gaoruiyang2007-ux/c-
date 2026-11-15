#include <stdio.h>
int f(int a)
{	int c=0;
	for(;a>0;a=a/10)
	{
		c=c*10+a;	
	}
	return c
}
int main(void)
{
    int a;
    scanf("%d",&a);
    for(i=1;i<a;i++){
    	if(a%i==0)
    	break
    b=f(a);
    if(b%i==0)
    	break
    	
	}
    
    
    return 0;
}
