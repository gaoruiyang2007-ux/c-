#include <stdio.h>


struct player
{
    int id;
    int k;
    int d;
    int a;
    int score;
};

int main() {
	struct player p[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d %d",&p[i].id,&p[i].k,&p[i].d,&p[i].a);
		p[i].score=(p[i].k + p[i].a) * 10 - p[i].d * 5;
	}
    for(i=0;i<5-1;i++){
    	for(j=0;j<5-1;j++){
    		if (p[j].score < p[j+1].score || 
               (p[j].score == p[j+1].score && p[j].k < p[j+1].k)) {
               	struct player tempt=p[j];
               	p[j]=p[j+1];
               	p[j+1]=tempt;
				   
    			
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("ID:%d,Score:%d,Kills:%d\n",p[i].id,p[i].score,p[i].k);
		
	}
		

	

    

    return 0;
}
