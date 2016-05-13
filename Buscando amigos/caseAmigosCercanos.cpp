#include <iostream>
#include <ctime>
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
    srand(time(NULL));
  int n;

    cout<<"Juan"<<" "<<rand()%30000<<endl;
    cout<<"Pedro"<<" "<<rand()%30000<<endl;
    cout<<"Bob"<<" "<<rand()%30000<<endl;

  return 0;
}
