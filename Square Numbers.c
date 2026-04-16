#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	while(scanf("%d %d", &a, &b) == 2){
		if(a == 0 && b == 0){
			break;
		}
		int start = (int)ceil(sqrt(a));
		int end = (int)floor(sqrt(b));
		int count = end - start + 1;
		
		if (count < 0) {
            count = 0;
        }
        printf("%d\n", count);
	}
}
