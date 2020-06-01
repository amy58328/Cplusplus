#include<bits/stdc++.h>

using namespace std;

bool rule(char a , char b)
{
	return a>b;
}

long long toint(string str)
{
	stringstream ss;
	ss << str;
	long long temp;
	ss >> temp;
	return temp;
}

string tostring(long long temp)
{
	stringstream ss;
	ss << temp;
	string str;
	ss >> str;
	return str;
}
int main()
{
	string str;
	while(1)
	{
		getline(cin,str);
		if(str[0] == '0')
			break;

		cout << "Original number was " << str << endl;
		sort(str.begin(),str.end());
		long long a = toint(str);
		sort(str.begin(),str.end(),rule);
		long long b = toint(str);

		long long c = b - a;

		printf("%lld - %lld = %lld\n",b,a,c );
		set<long long>s;

		int time = 1;

		while(!s.count(c))
		{
			s.insert(c);
			string temp = tostring(c);
			sort(temp.begin(),temp.end());
			a = toint(temp);
			sort(temp.begin(),temp.end(),rule);
			b = toint(temp);
			c = b-a;
			printf("%lld - %lld = %lld\n",b,a,c );
			time ++;
		}

		printf("Chain length %d\n\n",time	 );

	}
}