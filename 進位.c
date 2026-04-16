#include<stdio.h>

int main(){
	int a,b;
	while(scanf("%d %d", &a, &b) == 2){
		int temp;
		int carry = 0;
		if(a == 0 && b == 0){
			break;
		}
		while(a > 0 || b > 0){
			if((a%10) + (b%10) + temp >= 10){
				carry++;
				temp = 1;
			}else{
				temp = 0;
			}
			a = a / 10;
			b = b / 10;
		}
		if(carry == 0){
			printf("No carry operation.\n");
		}else if(carry == 1){
			printf("1 carry operation.\n");
		}else{
			printf("%d carry operations.\n", carry);

		}
	}
} 
