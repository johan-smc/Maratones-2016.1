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
  while( n-- )
  {
    cout<<aleC(rand()%30)<<" "<<rand()%30000<<endl;
    cout<<aleC(rand()%30)<<" "<<rand()%30000<<endl;
    cout<<aleC(rand()%30)<<" "<<rand()%30000<<endl;
  }
  return 0;
}
