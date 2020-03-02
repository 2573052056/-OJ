/*************************************************************************
	> File Name: 174.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月19日 星期二 17时59分04秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char a[10001] = {0};
    char b[10001] = {0};
    char change[] = "%20";
    char sear[] = " ";
    scanf("%[^\n]s",a);
    for(int i = 0; i < strlen(a); i++) {
        if(!strncmp(a + i, sear, strlen(sear))) {
            strcat(b , change);
        } else {
            strncat(b, a + i, 1);
        }
    }
    printf("%s\n",b);
    return 0;
}
