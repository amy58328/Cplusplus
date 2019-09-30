#include<bits.stdc++.h>

using namespace std;

int main()
{
	string str1 ,str2;

	while(cin >> str1 >> str2)
	{
		int str1_l = str1.size();
		int str2_l = str2.size();
		vector<char>ans;
		if(str1_l > str2_l)
		{
			int enter = 0;
			for(int i=0 ; i<str1_l ; i++)
			{
				int n1 = str1[i];
				int n2 = str2[i];
				int temp = n1 + n2;
				if(temp > 9)
				{
					enter = 1;
					temp /= 10;
					ans.push_back((char)temp);

				}
			}
		}

		else 
		{
			for(int i=0 ; i<str2_l ; i++)
			{

			}
		}
	}
}