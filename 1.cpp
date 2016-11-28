#include <iostream>
using namespace std;

int main()
{
  int A1, B1, C1, A2, B2, C2;
  cin>>A1>>B1>>C1>>A2>>B2>>C2;
  
  int D=((A1*B2)-(A2*B1));
  int x=((C1*B2)-(C2*B1))/D;
  int y=((A1*C2)-(A2*C1))/D;
  
  cout<<"x="<<x<<''<<"y="<<y<<endl;
  return 0;
}