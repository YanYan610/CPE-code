#include<stdio.h>

int main(){
	int N,flag,t = 1;
	int i,j;
	int b[101];
	int check[20001];
	
	while(scanf("%d", &N) != EOF){
		flag = 1;
		for(i=0;i<20001;i++){
			check[i] = 0;
		}
		for(i=0;i<N;i++){
			scanf("%d", &b[i]);
			if(b[i] < 1){
				flag = 0;
			}
		}
		for(i=0;i<N;i++){
			for(j=i;j<N;j++){
				if(b[i] > b[j] || check[b[i] + b[j]]){
					flag = 0;
				}else{
					check[b[i] + b[j]] = 1;
				}
			}
		} 
		if(flag == 1){
			printf("Case #%d: It is a B2-Sequence.\n\n",t++);
		}else{
			printf("Case #%d: It is not a B2-Sequence.\n\n",t++);
		}
	} 
}
