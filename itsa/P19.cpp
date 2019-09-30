#include<bits/stdc++.h>
#define N 25

using namespace std ;

int line[N] ;
void init()
{
	for(int i=0 ; i<25 ; i++)
	{
		line[i] = 0;
	}
}
int main()
{
	init();
	int t ;
	cin >> t;
	int max =0 ;

	while(t--)
	{
		
		int s,d;
		cin >> s >> d;
		for(int i=s ; i<d ; i++)
		{
			line[i] ++;
		}

		
		for(int i=0 ; i<25 ; i++)
		{
			if(max < line[i])
				max = line[i] ;
		}
	}
	cout << max << endl;
}