#include<iostream>
#include <bits/stdc++.h>
using namespace std;

#define max = 100000;

int ans ;

void buid_tree(int* tree ,int* num , int l, int r ,int seat)
{
    if(l == r)
        tree[seat] = num[l];
    else 
    {
        buid_tree(tree,num,l,(r+l)/2, seat*2);
        buid_tree(tree,num,(r+l)/2+1,r,seat*2+1);

        if(tree[seat*2] < tree[seat*2+1])
            tree[seat] = tree[seat*2];
        else 
            tree[seat] = tree[seat*2+1];
    }

}

int catch_number(string inst,int* range)
{
    int sum = 0;
    int j=0;
    for(int i=6 ; i<inst.length() ; i++)
    {
        
        if(inst[i] >= '0' && inst[i] <='9')
        {
            sum = sum*10 + (inst[i]- '0');
        }
        else if(inst[i] == ',' || inst[i] == ')')
        {
            range[j] = sum-1 ;
            j++;
            sum  = 0 ;
        }
        else 
            sum = 0;
    }

    return j ;
}

void search(int* tree,int seat , int l , int r , int fl,int fr)
{
   if(fl > r || fr < l)
		return ;
	if(fl<=l && fr >= r)
		ans = min(ans,tree[seat]);
	else
	{
		search(tree,seat*2,l,(r+l)/2,fl,fr);
		search(tree,seat*2+1,(r+l)/2+1,r,fl,fr);
	}
}


void change(int* tree, int l ,int r, int seat , int pos, int value)
{
    if(l==r && l==pos){
        tree[seat] = value;
        return ;
    }
    int mid = (l+r)/2;

    if(pos <= mid) // go left
    {
        change(tree,l,(l+r)/2,seat*2,pos,value);
    }
    else if(pos > mid) //go right
    {
        change(tree,(l+r)/2+1,r,seat*2+1,pos,value);  
    }

    tree[seat] = min(tree[seat*2],tree[seat*2+1]);

}
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int num[n];
    int tree[4*n];
    for(int i=0 ; i<n ; i++)
        scanf("%d",&num[i]);
    
    memset(tree,0,sizeof(tree));

    buid_tree(tree,num,0,n-1,1);
    int k = 1;
    for(int i = 1 ; i < 16 ; i++ ,k++){
        printf("%d ", tree[i]);
        if( k == 1 || k== 3 || k==7 )
            printf("\n");
    }
    printf("\n");
    while(q--)
    {  
        string inst;
        cin >> inst;
        if(inst[0] == 's')
        {
            int pos[30];
            int pos_size = catch_number(inst,pos);
            int temp = num[pos[0]];

            printf("------\n");
            for(int i = 0 ; i < pos_size ; i++ )
                printf("%d ",num[pos[i]]);
            printf("\n------------\n");

            for(int i=0 ; i<pos_size-1 ; i++)
            {
                num[pos[i]] = num[pos[i+1]];
                change(tree,1,n-1,1,pos[i]-1,num[pos[i]]);              
            }
            num[pos[pos_size-1]] = temp;
            change(tree,1,n-1,1,pos[pos_size-1]-1,temp);
        }
        else if(inst[0] == 'q')
        {
            int range[2];
            catch_number(inst,range);
            ans = 10000;
            search(tree,1,0,n-1,range[0]-1,range[1]-1);
            cout << ans<<endl;
        }
        
        int k = 1;
        for(int i = 1 ; i < 16 ; i++ ,k++){
            printf("%d ", tree[i]);
            if( k == 1 || k== 3 || k==7 )
                printf("\n");
        }
        printf("\n");

    }
}