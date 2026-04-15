#include<stdio.h>
#include<stdlib.h>

void bubble(int a[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(){
	int t;
	int i;
	scanf("%d", &t);
	while(t--){
		int r;
		scanf("%d", &r);
		int a[500];
		for(i=0;i<r;i++){
			scanf("%d", &a[i]);
		}
		
		bubble(a,r);
		
		int medin = a[r/2];
		
		int sum = 0;
		for(i=0;i<r;i++){
			sum += abs(a[i] - medin);
		}
		printf("%d\n", sum);

	}
}
