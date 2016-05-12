#include <iostream>

using namespace std;

string aleC(int n)
{
  string ret="";
  for( int i = 0 ; i < n ; ++i )
    ret.push_back((char)(rand()%26)+'a');
  return ret;
}

int main()
{
  int n;
  cin>>n;
  cout<<n<<endl;
  while(n--)
  {
    for( int i = 0 ; i < 10 ; ++i )
    {
      cout<<aleC((rand()%10)+1)<<" "<<rand()%1000000<<" "<<rand()%10000000<<endl;;
    }
  }
  return 0;
}
