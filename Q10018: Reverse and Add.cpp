#include<iostream>
#include<cstdio>

using namespace std;

unsigned long recompose(unsigned long q)
{
  unsigned long rec=0;
  while(q)
  {
    rec=rec*10+q%10;
    q/=10;
  }

  return rec;
}


int main(int argc, char const *argv[])
{ 
  #ifdef DEBUG
  freopen("input.in","r",stdin);
  freopen("output.out","w",stdout);
  #endif

  
  int t;
  cin >>t;
  while(t)
  {
    t--;
    unsigned long n;
    int time=0;
    cin >> n;
    unsigned long rec;
    rec=recompose(n);
    
    do{
      n=n+rec;
      rec=recompose(n);
      time++;
    }while(n!=rec);

    printf("%d %u\n",time,n );

  }
  
  return 0;
    
}
