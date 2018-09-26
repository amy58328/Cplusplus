#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	string a;
	while(getline(cin,a))
	{
		int time=0;
		bool test=0;
		for(int i=0;i<a.size();i++)
		{
			if(isalpha(a[i]) && !test)
			{
				test=1;
				time++;
			}
			else if(!isalpha(a[i]) && test)
			{
				test=0;
			}
		}

		printf("%d\n",time );
	}
	return 0;
}
