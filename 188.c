/*************************************************************************
	> File Name: 188.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月22日 星期五 16时45分24秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int n = 1000000;
int mark[1000001];

int main() {
    int c;
    memset(mark, 0, sizeof(mark));
    mark[0] = 1;
    mark[1] = 1;
    int N, M;
    scanf("%d %d",&N,&M);
    for (c = 2; c * c <= N; c++) {
    if(mark[c] != 1){
            for(int j = 2; j <= N / c;j++){
                mark[c * j] = 1;
            }
        }
    }
    for(c = M; c <= N; c++){
        if(mark[c] != 1){
            printf("%d\n",c);
        }
    }
    return 0;
}
