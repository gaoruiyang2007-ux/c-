#include <stdio.h>

int remove_duplicate(int a[], int n) {
    int k = 0;                    // k = 已保留元素个数
   	int i,j,flag;
   	for(i=0;i<n;i++){
   		flag=0;
   		
   		for(j=0;j<k;j++){
   			if(a[j]==a[i]){
			   
   			flag=1;
   			break;}
		   }
		if(flag==0)
		a[k++]=a[i];
	   }
    return k;                     // 返回去重后的长度
}

int main(void) {
    int a[] = {1, 2, 2, 3, 1, 4, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int len = remove_duplicate(a, n);

    // 一次性输出：按新长度遍历
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");   // 输出：1 2 3 4 5
    return 0;
}
