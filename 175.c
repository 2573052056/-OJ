/*************************************************************************
	> File Name: 175.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月19日 星期二 18时21分25秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    int n, a[31];
    int len1 = 0, len2 = 0, len3 = 0, len4 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] >= 90 && a[i] <= 100) {
            len1++;    
        } else if(a[i] >= 80 && a[i] <= 89) {
            len2++;   
        } else if(a[i] >= 60 && a[i] <= 79) {
            len3++;
        } else if(a[i] < 60) {
            len4++;    
        } 
    }
    printf("You %d\n", len1);
    printf("Liang %d\n", len2);
    printf("Zhong %d\n", len3);
    printf("Cha %d\n", len4);
    return 0;
}
