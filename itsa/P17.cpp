#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	while(getline(cin,str))
	{
		vector<string>ans;
	
		istringstream delim(str);

		string temp;

		while(getline(delim,temp,' '))
		{
			bool dis = true;
			for(int i=0 ; i<temp.size() ;i++)
			{
				if(temp[i] >=65 && temp[i]<=90)
				{
					temp[i] += 32;
				}

				if(temp[i] == ',' || temp[i] == '.' || temp[i] == '?' || temp[i] == '!')
				{
					if(i == 0)
					{
						temp.assign(temp,1,temp.size()-1);
					}
					else
					{
						temp.assign(temp,0,temp.size()-1);
					}
				}
			}

			for(int i=0 ; i<ans.size() ; i++)
			{
				if(temp == ans[i])
				{
					dis = false;
					break;
				}
			}

			if(dis)
			{
				ans.push_back(temp);
			}
		}
		for(int i=0 ; i<ans.size() ; i++)
		{
			cout << ans[i] ;
			if(i != ans.size()-1)
				cout << " " ;
		}
		cout <<endl;
	}
	
	return 0;
}