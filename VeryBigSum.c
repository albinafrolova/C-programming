#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    long long sum;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    
    for(int j = 0; j < n; j++){
        sum += arr[j];
    }
    printf ("%lld", sum);
   
    return 0;
}