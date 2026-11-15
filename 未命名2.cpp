#include <stdio.h>

    
int main(void)
{	int s1[25],s2[25],out[25];
	int n1=0,i,n2=0,k=0,j,temp=0,find=0,x;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		scanf("%d",&s1[i]);
	}
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d",&s2[i]);
	}
	for(i=0;i<n1;i++){
		find=0;
		for(j=0;j<n2;j++){
			if(s1[i]==s2[j]){
				find=1;
				break;
			}
		}
		if(find==0){
		
		int already = 0;
            for(x = 0; x < k; x++){
                if(out[x] == s1[i]){      /* out жпрясп */
                    already = 1;
                    break;}
        	}    
		if(!already){
                out[k++] = s1[i];
            }
		}
	}	
    for(i = 0; i < k - 1; i++){
        for(j = 0; j < k - 1 - i; j++){
            if(out[j] > out[j+1]){
                temp = out[j];
                out[j] = out[j+1];
                out[j+1] = temp;
            }
        }
    }
	for(i=0;i<k;i++){
		if(i!=k-1)
		printf("%d ",out[i]);
		else if(i==k-1)
		printf("%d",out[i]);
		
	}
	
	
	
	return 0;
}
