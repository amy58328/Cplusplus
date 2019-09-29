#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >> n >>m ;
		int arr[n][m];

		for(int i=0 ; i<n ; i++)
		{
			for(int j=0 ; j<m ; j++)
			{
				cin >> arr[i][j];
			}
		}

		for(int j=0 ; j<m ; j++)
		{
			for(int i=0 ; i<n ; i++)
			{

				cout << arr[i][j] ;
				if(i != n-1)
					cout <<" " ;
			}

			cout << endl;
		}

	return 0;
}

// int main(){  
//     int a,b,count;  
//     scanf("%d%d",&a,&b);  
//     int box[a*b];
//     for(int i=0;i<(a*b);i++){
//     	scanf("%d",&box[i]);
// 	}
// 	for(int y=0;y<b;y++){
// 		for(int x=0;x<a;x++){
// 			count++;
// 			printf("%d",box[x*b+y]);
// 			if(count%a!=0){
// 				printf(" ");
// 			}
// 		}
// 		printf("\n");
// 	}
// }  
