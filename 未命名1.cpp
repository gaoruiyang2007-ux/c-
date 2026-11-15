#include <stdio.h>
int main(void) {
    char lie[80];
    int i;
    for(i=0;(lie[i]=getchar())!='\n';i++){
    	scanf("%c",&lie[i]);
	}
   
    return 0;
}
