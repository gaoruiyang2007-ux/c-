#include <stdio.h>
#include <math.h>
int ifrun(int y){
		if(y%4==0&&y%100!=0||(y%400==0))
		return 1;
		else
		return 0;
} 
int sumday(int y,int m,int d){
	int month[13];
	if(ifrun(y)){
	month[0]=0;
	month[1]=31;
	month[2]=29;
	month[3]=31;
	month[4]=30;
	month[5]=31;
	month[6]=30;
	month[7]=31;
	month[8]=31;
	month[9]=30;
	month[10]=31;
	month[11]=30;
	month[12]=31;}
	
	else{
	month[0]=0;
	month[1]=31;
	month[2]=28;
	month[3]=31;
	month[4]=30;
	month[5]=31;
	month[6]=30;
	month[7]=31;
	month[8]=31;
	month[9]=30;
	month[10]=31;
	month[11]=30;
	month[12]=31;}
		int i=0,n=0;
	for(i=0;i<m;i++){
		n=n+month[i];
	}
	n=n+d;
	return n;
	
	
}
int main(void){
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	printf("%d",sumday(y,m,d));
	
	

	
	
	
	return 0;
}
