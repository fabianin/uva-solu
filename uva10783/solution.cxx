#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t,a,b;
	cin >>t;
	for (int i =0; i < t; i++){
		int out =0;
		cin >> a >> b;
		for (int j = a; j <= b ; j++)
		{
			if(j%2!=0){
				out +=j;
			}
			else
			{
				continue;
			}
			
		}
		
		cout << "Case " << i+1 << ": " << out <<endl;
	}
		
	return 0;
}
