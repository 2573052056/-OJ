/*************************************************************************
	> File Name: 191.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月01日 星期日 14时36分17秒
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[8000000]={0};
int b[8000000];
int main(){

   int n, m, t = 0 , max = 0 , min = 1000, c1, c2, d1, d2;
   cin >> m >> n;
   a[0] = 1;
   a[1] = 1;
    for(int i = 2; i <= sqrt(n); i++)
        for(int j = 2; j <= n / i; j++){
      	    if(a[i] != 1 && i * j >= m){
      	        a[i*j] = 1;
		    }
	    }
	    for(int i = m; i <= n; i++) {
	        if(a[i] == 0){
		 	    b[t] = i;
			    t++; 
            }
		}
	if(t == 0)  cout<<"There are no adjacent primes.";
	else{
	    for(int i = 0; i < t - 1; i++){
	        if((b[i+1] - b[i]) > max){			
	         	max = b[i+1] - b[i];
				c1 = b[i];
				c2 = b[i+1];
            }
	      	if((b[i+1] - b[i]) < min){
	        	min = b[i+1] - b[i];
				d1 = b[i];
				d2 = b[i+1];
            }
	    }
	    cout<<d1<<","<<d2<<" are closest"<<", "<<c1<<","<<c2<<" are most distant.";
    }
	return 0;
}
