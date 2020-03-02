/*************************************************************************
	> File Name: 166.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 15时53分59秒
 ************************************************************************/

#include<iostream>                                     
using namespace std;                                   
int main() {                                           
    string a, b;                                       
    int n;                                             
    cin >> a >> n >> b;                                
    int len1 = a.length();                             
    if (len1 > 100) {                                  
        cout << 100 << endl;                           
    } else {                                           
        cout << len1 << endl;                          
    }                                                  
    a.insert(n - 1, b);                                
    cout << a << endl;                                 
    int len2 = a.length();                             
    int ans = 0;                                       
    for (int i = len2 - 1; i >= 0; i--) {              
        ans++;                                         
        if (a[i] == 'x') {                             
            cout << ans << endl;                       
            break;                                     
        }                                              
    }                                                  
    return 0;   
}
