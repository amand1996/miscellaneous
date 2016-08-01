#include<stdio.h>
#include<math.h>
int main(){
	unsigned long long int n, i, x, y, z, count, obtuse=0, right=0, acute=0;
	char ch;
	scanf("%llu", &n);
	if(n>=3 && n<=5000){
		unsigned long long int a[n+1];
		i=1;
		do{
			ch='\0';
			scanf("%llu%c",&a[i], &ch);
			if(a[i]<1 || a[i]>10000){
				break;
			}
			if(i>1&&(a[i-1]>a[i])){
				break;
			}
			i++;
		}while(ch==' ');
		
		for(x=1; x<=n; x++){
			for(y=1; y<=n, x>y; y++){
				for(z=1; z<=n, y>z; z++){
				
					
				if(x>y && y>z){
					if((a[z]*a[z] + a[y]*a[y]< a[x]*a[x])&& (a[z]+a[y]>a[x])&&(a[x]+a[y]>a[z])&&(a[x]+a[z]>a[y])){
						obtuse++;
					}
					else if((a[y]*a[y] + a[z]*a[z]==a[x]*a[x])&&(a[z]+a[y]>a[x])&&(a[x]+a[y]>a[z])&&(a[x]+a[z]>a[y])){
						right++;
					}
					else if((a[z]+a[y]>a[x])&&(a[x]+a[y]>a[z])&&(a[x]+a[z]>a[y])){
						acute++;

					}}
					
				}
			}
		}
	}
	printf("%llu %llu %llu\n", acute, right, obtuse);
	return 0;
}
