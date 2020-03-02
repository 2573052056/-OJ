/*************************************************************************
	> File Name: 167.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月17日 星期日 15时58分05秒
 ************************************************************************/

#include<iostream>                                   
using namespace std;                                   
int main() {                                           
    string a, b;                                       
    int n;                                             
    cin >> a >> n >> b;                                
    int len1 = a.length();                                           
    cout << len1 << endl;               
    int len2 = a.length();                             
    int ans = 0;                                       
    for (int i = 0; i <= len2 - 1; i++) {              
        ans++;                                         
        if (a[i] == 'a') {                             
            cout << ans << endl;                       
            break;                                     
        }                                              
    } 
    a.insert(n - 1, b);
    cout << a << endl;
    return 0;   
}

