/*************************************************************************
	> File Name: 182.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月21日 星期四 19时29分29秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000000

int a[MAX_N + 5];

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
