#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


bool cmp(const string &a, const string &b)
{
	return a + b > b + a;
}

int main(){

    vector<string> numbers{ "10", "68", "75", "7", "21", "12" };
	int size = numbers.size();

	sort(numbers.begin(), numbers.end(), cmp);
	
	
	string output = "";
	for (string i: numbers)
	{
		output += i;
	}
    
    
    cout << output;
    
    return 0;
}

