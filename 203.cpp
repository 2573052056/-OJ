/*************************************************************************
	> File Name: 203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月10日 星期一 23时04分22秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	double t[m+1][n+1];
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cin >> t[i][j];
		}
	}

	double bt[n+1];
	for(int i = 0; i < n; ++i){
		bt[i] = t[0][i];
	}
	for(int i = 0; i < n; ++i){
		for(int j = 1; j < m; ++j){
			if(t[j][i] > bt[i])
				bt[i] = t[j][i];
		}
	}
	for(int i = 0; i < n; ++i)
		cout << bt[i] << endl;

	double ts[m*n+1];
	int z = 0;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			ts[z] = t[i][j];
			++z;
		}
	}
	double px = 0;
	int zc = z;
	while(zc){
		for(int i = 1; i < zc; ++i){
			if(ts[i] > ts[i-1]){
				px = ts[i];
				ts[i] = ts[i-1];
				ts[i-1] = px;
			}
		}
	--zc;
	}
	for(int i = 0; i < z; ++i){
		if(i == 0)
			cout << ts[i];
		else
			cout << " " << ts[i];
	}
	cout << endl;

	double many = 0;
	for(int i = 0; i < z; ++i){
		many += ts[i];
	}
	many /= z;
	many = round(many);
	cout << many << endl;


	int gp = 0;
	for(int i = 0; i < z; ++i){
		if(ts[i] >= many)
			++gp;
	}
	cout << gp;

	return 0;
}
