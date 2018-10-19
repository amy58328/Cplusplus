#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int v,t;
	while(~scanf("%d %d",&v,&t))
	{
		int path;
		path=v*2*t;
		cout <<path<<endl;
	}
	return 0;
}