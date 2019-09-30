#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	string str1;

	while(cin>>str)
	{

		cin>>str1;
		int ans = 0;
		for(int i=0 ; i<str1.size() ; i++)
		{
			bool temp = true;
			for(int j=0 ; j<str.size() ; j++)
			{
				if(str1[i+j] != str[j])
				{
					temp = false;
					break;
				}
			}

			if(temp)
				ans++;
		}

		// unsigned int i=0 ; 
		// while((i = str1.find(str,i)) < str1.size())
		// {
		// 	ans++;
		// 	i++;
		// }
		cout << ans << endl;
	}

	return 0;
}
