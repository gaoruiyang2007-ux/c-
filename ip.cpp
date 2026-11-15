#include <stdio.h>
#include <string.h>
int validate_ipv4(char *ip_str){
	int len= strlen(ip_str);
	if(len<7||len>15) return 0;
	int dot_count=0;
	int digit_count=0;
	int num=0;
	int i; 
	for (i=0;i<len;i++)
	{
		char c=ip_str[i];
		if(c=='.'){
			dot_count++;
			if(dot_count>3)return 0;
			if(digit_count==0)return 0;
			if(digit_count>1&&ip_str[i-digit_count]=='0') return 0;
			digit_count=0;
			num=0;
			
		}
		else if (c>='0'&&c<='9'){
			digit_count++;
			if(digit_count>3)return 0;
			num=num*10+(c-'0');
			if(num>255) return 0;
			
			
		}
		else return 0;
		
	}
	if(dot_count!=3)return 0;
	if(digit_count == 0);
	if (digit_count > 1 && ip_str[len - digit_count] == '0') return 0;
	return 1;
}
int main(void)
{	
	char ip_str[50];
	if(scanf("%49s",ip_str)!=EOF)
	{   printf("IPµØÖ·-%s\n", ip_str);
		if( validate_ipv4(ip_str))
		printf("1");
		else
		printf("0");
	}
	
	return 0;
}
