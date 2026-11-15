#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
    int c=0,b=a;
    for(;a>0;a=a/10)
	{
    	c=c*10+b%10;
    	b=b/10;
	}
	c=c/10;
	a=0,b=c;
	for(;c>0;c=c/10)
	{
    	a=a*10+b%10;
    	b=b/10;
	}
	printf("%d",a);
    
	
		
	
	
	
    return 0;
}
