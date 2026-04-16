#include<stdio.h>

int main(){
	int T,a,b,i;
	int t = 1;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &a, &b);
		int sum = 0;
		for(i=a;i<=b;i++){
			if(i % 2 == 1){
				sum += i;
			}
		}
		printf("Case %d: %d\n", t++, sum);
	}
}
