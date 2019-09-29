#include<bits/stdc++.h>

using namespace std ; 

int arr[33000];
void prime()
{
	arr[0] = 0;
	arr[1] = 0;

	for(int i=2 ; i<33000 ; i++)
	{
		if(arr[i] == 1)
		{
			for(int j=i+i ; j<33000 ; j = j+i)
			{
				arr[j] = 0;
			}
		}
		
	}
}

void init()
{
	for(int i=0 ; i<33000 ; i++)
		arr[i] = 1;
}
int main()
{
	int n;

	init();
	prime();
	while(cin >> n)
	{
		if(arr[n] == 1)
			cout << "YES" << endl;
		else
			cout <<"NO" << endl;
	}
}