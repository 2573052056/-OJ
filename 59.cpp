/*************************************************************************
	> File Name: 59.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月04日 星期六 22时34分40秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

#define Plog(frm, arg...) { \
    printf("[ %s : %d -> output ] " frm "\n", __func__, __LINE__, ##arg); \
    fflush(stdout); \
}

int sum(int n, ...);

void haizei_test() {
    Plog("%d", sum(2, 1, 3));
    Plog("%d", sum(2, 2, 4));
    Plog("%d", sum(10, 5, 3, 6, 9, 10, 11, 1998, 10287, 987, 18713));
    Plog("%d", sum(3, 1, 9, 8, 7, 4));
}

int sum(int n, ...) {
    va_list p;
  va_start(p, n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += va_arg(p, int);
    }
    va_end(p);
    return sum;
}

int main() {
    haizei_test();
    return 0;
}
