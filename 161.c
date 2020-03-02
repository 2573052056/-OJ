/*************************************************************************
	> File Name: 161.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 18时54分43秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n, m;
    double  sum = 0;
    scanf("%d %d", &n, &m);
    sum = n;
    for(int i = 1; i <= m; i++){
        sum  = sum  * (1 + 0.06);
    }
    printf("%.6lf\n", sum);
    return 0;
}
