#include <iostream>

using namespace std;

int main()
{
  int n,k,total=0;
  cin>>n>>k;
  int array_input[n];
  for(int i = 0; i<=n;i++){
    cin>>array_input[i];
  }
  for(int j = 0; j<n; j++){
    if(array_input[j]>=array_input[k-1] && array_input[j]>0){
        total++;
    }
  }
  cout<<total<<endl;
    return 0;
}
