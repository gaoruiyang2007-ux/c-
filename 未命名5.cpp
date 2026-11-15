#include <stdio.h>
int main(void)
{	int i=0,j=0,size=3,step=0,x=0,y=0;
	int numofx=0,numofo=0,r=-1;
	char pan[size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			pan[i][j]='0';
		}
	}
	for(step=0;step<9;step++)
	{
		scanf("%d %d",&i,&j);
		if(step%2==0)
		pan[i-1][j-1]='O';
		else if(step%2!=0)
		pan[i-1][j-1]='X';
		
		for(x=0;x<size;x++)
		{
			for(y=0;y<size;y++)
		{
				printf("%c",pan[x][y]);	
		}
			printf("\n");
		}
	
	/*for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&pan[i][j]);	
		}
		
	}*/

	for(i=0;i<size&&r==-1;i++){
		numofx=0,numofo=0;	
		for(j=0;j<size;j++){
			if(pan[i][j]=='O')
			numofx++;
			else if (pan[i][j]=='X')
			numofo++;
			if(numofx==size)
			r=0;
			else if(numofo==size) 
			r=1;
		}
	}
	
	for(j=0;j<size&&r==-1;j++){
		numofx=0,numofo=0;	
	    for(i=0;i<size;i++){
			if(pan[i][j]=='O')
			numofx++;
			else if (pan[i][j]=='X')
			numofo++;
			if(numofx==size)
			r=0;
			else if(numofo==size) 
			r=1;
		}
	}
	numofx=0,numofo=0;
	for(i=0;i<size&&r==-1;i++){
		
			
		if(pan[i][i]=='O')
		numofx++;
		else if (pan[i][i]=='X')
		numofo++;
		if(numofx==size)
		r=0;
		else if(numofo==size) 
		r=1;
	}
	numofx=0,numofo=0;
	for(i=0;i<size&&r==-1;i++){
			
			
			if(pan[i][size-1-i]=='O')
			numofx++;
			else if (pan[i][size-1-i]=='X')
			numofo++;
			if(numofx==size)
			r=0;
			else if(numofo==size) 
			r=1;
		
	}
	
	
	
	
	if(r==-1&&step==8){
		printf("平局");return 0; 
	}else if(r==0){
		printf("O获胜");return 0;
		
	}else if(r==1){
		printf("X获胜");return 0;
		
	} 
}
}
