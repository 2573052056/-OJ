/*************************************************************************
	> File Name: 443.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 09时10分02秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int l, m;
    int b, e, s=0, t=0;
    scanf("%d%d", &l, &m);
    int arr[l+1];
    for(int i = 0; i <= l; i++) arr[i]=0;
    for(int i = 0; i < m; i++){
        scanf("%d%d", &b, &e);
        for(t=b;t<=e;t++)
        arr[t]=1;
    }
    for(int i = 0; i < l + 1; i++){
        if(arr[i] == 0)
        s++;
    }
    printf("%d\n",s);
    return 0;
}
