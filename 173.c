/*************************************************************************
	> File Name: 173.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 20时11分48秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char a[1000];
    int len1 = 0, len2 = 0, len3 = 0, len4 = 0;
    scanf ("%[^\n]s", a);
    for(int i = 0; i < strlen(a); i++) {
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            len1++;
        } else if(a[i] >= '0' && a[i] <= '9') {
            len2++;
        } else if(a[i] == ' '){
            len3++;
        } else {
            len4++;
        }
    }
    printf("%d %d %d %d\n", len1, len2, len3, len4);
    return 0;
}
