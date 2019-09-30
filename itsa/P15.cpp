#include <bits/stdc++.h>

using namespace std;

int arr[26];
void init()
{
	for(int i=0 ; i<26 ; i++)
		arr[i] = 0;
}
int main(int argc, char const *argv[])
{
	string str;
	while(getline(cin,str))
	{
		init();
		int ans = 1;
		for(int i=0 ; i<str.size() ; i++)
		{
			if((i!=str.size()-1) && str[i] == ' ' )
				ans ++;
			else if(str[i] >= 'a' && str[i] <='z')
			{
				int index = str[i] - 97;
				arr[index]++;
			}

			else if(str[i] >= 'A' && str[i] <='Z')
			{
				int index = str[i] - 65;
				arr[index]++;
			}
		}

		cout << ans  <<endl;
		for(int i=0 ; i<26 ; i++)
		{
			if(arr[i] != 0)
			{
				char c = i + 97;
				printf("%c : %d\n",c,arr[i] );
			}
		}

	}
	return 0;
}