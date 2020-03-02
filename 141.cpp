/*************************************************************************
	> File Name: 141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 09时27分31秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 2 * n + 1;
    char ret = 'A';
    int b = 0;
    for (int i = 1; i <= 2 * n + 1; i++) {
      for (int j = 1; j <= b; j++) {
          printf(" ");
      }
      for (int j = 1; j <= a; j++) {
          printf("%c", ret);
          if (j <= a / 2) ret++;
          else ret--;
      }
      printf("\n");
      if (i <= n) a -= 2, b++, ret += 2;
      else a += 2, b--;
    }
    return 0;
}
