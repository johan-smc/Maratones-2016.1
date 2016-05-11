#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n;
  cin>>n;
  cout<<n<<endl;
  srand (time(NULL));
  while(n--)
  {
    for( int i = 0 ; i < 5 ; ++i )
    {
      for( int j = 0 ; j < 5 ; ++j )
      {
        cout<<rand()%500<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
