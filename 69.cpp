/*************************************************************************
	> File Name: 69.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月07日 星期六 12时58分49秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if ( month > 12 || month <= 0){
        printf ("No\n");
    }else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month ==10 || month == 12) {
        if ( day >= 1 && day <= 31 ) {
            printf ("Yes\n");
        }else {
            printf ("No\n");
        }
    }else if ( month == 4 || month == 6 || month == 9 || month == 11) {
        if ( day >= 1 && day <=30 ) {
            printf ("Yes\n");
        }else {
            printf ("No\n");
        }
    }else if ( month == 2 ) {
        if (( year % 100 != 0 && year % 4 == 0 ) || year % 400 ==0 ) {
            if ( day >= 1 && day <= 29) {
                printf ("Yes\n");
            }else {
                printf("No\n");
            }
        }else {
            if ( day >=1 && day <= 28 ) {
           	 		printf("Yes\n");
        	}else {
                printf ("No\n");
            }
        }
    }
    return 0;
}
