#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, n , i; 
    scanf("%d",&t);
    if(t>=1 && t<=1000){
        while(t--){
            scanf("%d",&n);
            if(n>=1 && n<=100){
                int sum=0, arr[101];
                for(i=0; i<n; i++){
                    scanf("%d",&arr[i]);
                }
                
                for(i=0; i<n-1; i++){
                    if(arr[i]==0 && arr[i+1]==0){
                        sum++;
                        arr[i+1]=1;
                    }
                }
                printf("%d\n", sum);
            }
        }
        
    }
    return 0;
}

