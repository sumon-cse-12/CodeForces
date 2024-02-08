#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n,o=0;
  string s;
  cin>>n;
  int x[n];
  for(int i=0;i<n;i++){
    cin>>s;
   if(s[1]=='+'){
    o++;
   }else{
   o--;
   }
  }

  cout<<o<<endl;
    return 0;
}

