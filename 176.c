/*************************************************************************
	> File Name: 176.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月19日 星期二 19时45分05秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 10000

char a[MAX_N + 5];
char b[MAX_N + 5];
int main() {
    int n = 0;
    scanf("%[^\n]s", a);
    getchar();
    scanf("%[^\n]s", b);
    getchar();
    for(int i = 0; a[i]; i++) {
        int c = 0;
        for(int j = 0, k = i; b[j]; j++) {
            if(a[k] != b[j]) break;
            k++, c++;
        }
        if(c == strlen(b)) n++;
    }
    printf("%d\n", n);
    return 0;
}
