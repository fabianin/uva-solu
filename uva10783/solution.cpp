#include <iostream>
#include <bits/stdc++.h>
int main(void){
	int t,a,b,out;
	cin >>t;
	for (int i =0; i < t; i++){
		out =0;
		cin >> a >> b;
		for (int j = a; j <= b ; j++)
		{
			if(j%2!=0){
				out +=j;
			}
		}
		cout << "case " << i << ": " << out << endl;
	}
		
	return 0;
}
