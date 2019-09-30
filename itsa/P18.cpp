#include<bits/stdc++.h>

using namespace std;
string taget = "`1234567890-=\\qwertyuiop[]asdfghjkl;\'zxcvbnm,./~!@#$%^&*()_+|";
string table = "1234567890-=\\\\wertyuiop[]]sdfghjkl;\'\'xcvbnm,.//!@#$%^&*()_+||";
int main()
{
	string str;
	while(getline(cin,str))
	{
		for(int j=0 ; j<str.size() ; j++)
		{
			if(str[j] >= 65 && str[j] <= 90)
			{
				str[j] += 32;
			}
			if(str[j] == ' ')
			{
				cout << ' ';
				continue;	
			}

			for(int i=0 ; i<taget.size() ; i++)
			{
				if(taget[i] == str[j])
				{
					cout << table[i];
					break;
				}
			}
		}
		
		cout << endl;
	}
}