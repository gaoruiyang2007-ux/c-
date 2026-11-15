#include <stdio.h>
int main(void){
	int n=0,x=0;
	int i=0,j=0;
	scanf("%d",&n);
	int t[n][4];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&t[i][j]);
		}
	}
	int a=0,b=0,c=0,y=0;
	for(i=0;i<n;i++){
		a=t[i][0],b=t[i][1],c=t[i][2];
		int next=a;
		t[i][3]=1;
		y=0;
		for(x=0;x<1000;x++){
			if(y==c){
				t[i][3]=0;
			}
			else if(y!=c){
				if(y+a>=b){
					next=a-b+y;
					y=0;
				}else if(y+a<b){
					
					next=a;
				}
				
			}
			y=y+next;
		}
		if(t[i][3]==0)
		printf("yes\n");
		else if(t[i][3]==1)
		printf("no\n");
		//t[i][3]==1;
		
	}

	
	
	return 0;
}

