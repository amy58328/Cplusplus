#include<bits/stdc++.h>
#define N 25

using namespace std;

list<int>block[N+5];
int pos[N+5];

void init(int n)
{
	for(int i=0 ; i<n ; i++)
	{
		block[i].clear();
		pos[i] = i;
		block[i].push_back(i);
	}

	for(int i=0 ; i<n ; i++)
	{
		printf("%d : ", i);
		printf("%d\n",block[i].end() );
		printf("\n");
	}	
}

int main()
{
	int n;
	while(cin >> n)
	{
		init(n);
		string a,b;
		int x,y;
		cin >> a ;
		if(a == "quit")
			break;
		cin >> x >> b >> y;
	}	
}