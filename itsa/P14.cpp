#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	while(cin>> str)
	{
		bool ans = true;
		int size = str.size();
		int i=0 ; 
		int j=size-1;
		
		while(1)
		{
			if(str[i] != str[j])
			{
				ans = false;
				break;
			}

			
			if(i>j)
			{
				break;
			}
			i++;
			j--;
		}

		if(ans)
			cout << "YES" <<endl;
		else 
			cout << "NO" <<endl;
	}

	return 0;
}