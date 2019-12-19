#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cout<<"Vvedite N"<<endl;
  cin>>n;
  vector<int> a(n);
  cout<<"Vvedite massiv"<<endl;
  for (int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  vector<int> b(n);
  cout<<"Vvedite massiv"<<endl;
  for (int i=0; i<n; i++)
  {
    cin>>b[i];
  }
  int c;
  for (int i=0; i<n; i++)
  {
    c=a[i];
    a[i]=b[i];
    b[i]=c;
  }
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<endl;
  }
  for (int i=0; i<n; i++)
  {
    cout<<b[i]<<endl;
  }
  return 0;
}
