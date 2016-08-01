#include<stdio.h>
#include<math.h>
int main(){
	long int t;
	scanf("%li", &t);
	long int sum, i;
	if(t>=1 && t<=pow(10,5)){
		i=1;
		int count=0;
		long int m=2;
		while(i<=t){
			if(i==1){
				sum=1;
			}
			else{
				sum = sum + m;
				count++;
			}
			if(count == 2){
				m++;
				count=0;
			}
			i++;
		}
		
		printf("%li", sum);
	}
	return 0;
}
