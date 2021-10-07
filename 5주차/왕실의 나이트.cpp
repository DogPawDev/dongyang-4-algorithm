#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    string input;
    cin >> input;
    
    int row = input[1] - '0';
    int col = input[0] - 'a' + 1;
    
    
    int result=0;
    
    
    for(int i=0; i<8;i++){
        
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];
        
        if (nextRow >= 1 && nextRow <= 8 && nextCol >= 1 && nextCol <= 8)
            result++;

        
        
    }
    
    cout << result << '\n';

	return 0;
}