#include<bits/stdc++.h>

using namespace std;

long long mol(long long a,int time)
{
	if(time == 0 )return 1;

	long long temp = mol(a,time/2);

	if(time%2 == 1)
	{
		return a * temp * temp;
	}
	else
	{
		return temp * temp;
	}
}

int main()
{
	int x;
	
	while(cin >> x)
	{
		getchar();
		string str ;
		getline(cin ,str);

		stringstream ss;
		ss << str;

		vector<long long>a;
		
		int temp ;

		while(ss >> temp) 
		{
			a.push_back(temp);
		}

		int n = a.size()-1;

		int index = 0;
		long long ans = 0;

		while(n>0)
		{
			ans += (a[index] * n * mol(x,n-1));
			index++;
			n --;
		}

		cout << ans << endl;
	}

	return 0;
}