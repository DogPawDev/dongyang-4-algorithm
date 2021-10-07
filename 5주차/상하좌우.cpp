#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string plans;
	int size;
	
	int x=1;
	int y=1;
	
	int dx[4]={0,0,-1,1};

	int dy[4]={-1,1,0,0};
	char moveType[4]={'L','R','U','D'};
	
	
	
	
    cin >> size;
    cin.ignore();
	getline(cin,plans);
	int map[size][size];
	
	int nx=1;
	int ny=1;
	
	for(int i=0; i<plans.size();i++){
	    char plan = plans[i];
	    
	     for(int j=0; j<4; j++){
	            if(plan == moveType[j] ){
	                nx = x +dx[j];
	                ny = y +dy[j];
	            }
	        }
	      if(nx<1|| ny<1|| nx>size || ny > size )
	            continue;
	        x = nx;
	        y = ny;
	}
	
	cout << x << ' ' << y << '\n';
	
	


	return 0;
}