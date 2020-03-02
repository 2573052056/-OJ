/*************************************************************************
	> File Name: 152.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 16时00分32秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char a[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if(n < 5) {
        printf("%s",a[n + 2]);
    }else{
        printf("%s",a[(n + 2) % 7]);
    }
    return 0;
}
