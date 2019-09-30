#include <bits/stdc++.h>

using namespace std;
struct data
{
	char c;
	int n;
};

bool rule(data a,data b)
{
	if(a.c > b.c)
	{	
		return 1;
	}
	if(a.c == b.c)
	{
		if(a.n > b.n)
			return 1;
	}
	// else
	return 0;
}
int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int t;
	cin >> t ;
	getchar();
	while(t--)
	{
		vector<data>arr;
		
		char temp_c;
		int temp_n;
		temp_c = getchar();
		while(temp_c != '\n')
		{
			cin >> temp_n;
			arr.push_back((data){temp_c,temp_n});
			temp_c = getchar();
			if(temp_c == ' ')
				temp_c = getchar();
		}

		sort(arr.begin(),arr.end(),rule);

		for(int i=0 ; i<arr.size() ; i++)
		{
			cout << arr[i].c << arr[i].n;
			if(i != arr.size()-1)
				cout << " " ;
		}
		if(t != 0)
			cout << endl;
	}
	return 0;
}