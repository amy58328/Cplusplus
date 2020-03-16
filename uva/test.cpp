#include<bits/stdc++.h>

using namespace std ;

list<int>test;


int main(int argc, char const *argv[])
{
	
	int n;
	while(cin >> n)
	{
		test.push_back(n);
		for(int i=test.begin() ; i!= test.end(); i++)
		{
			printf("%d ",*i );
		}
		cout << endl;
	}



}

