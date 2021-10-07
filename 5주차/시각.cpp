#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, cnt=0;
	
	
	cin >> n;
	
	for (int i=0; i<= n; i++){
	    for(int j=0; j<60; j++){
	        for(int k = 0; k< 60; k++){
	            if (i % 60 == 3 || j / 10 ==3 || j % 10 == 3 || k /10 ==3 || k % 10==3)
	                cnt++;
	        }
	    }
	}
	
	cout << cnt << '\n';
	
	
	
	return 0;
}