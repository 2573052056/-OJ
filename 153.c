/*************************************************************************
	> File Name: 153.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 16时20分39秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int year, month, day;
    int h, q, m, j, k;
    char a[] = {'6','7','1','2','3','4','5'};
    scanf ("%d %d %d", &year, &month, &day); 
    q = day;
    if (month >= 3 && month <= 12) {    
        m = month;
        j = year / 100;
        k = year % 100;  
    } else if (month == 1 || month == 2) {
        m = month + 12;
        year -= 1;
        j = year / 100;
        k = year % 100;
    }
    h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    printf ("%c\n", a[h]);
    return 0;
}
