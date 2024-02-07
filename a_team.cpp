
#include <iostream>

using namespace std;

int main()
{
    int p,v,t,n,total_count=0;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>p>>v>>t;
        int sum = p+v+t;
        if(sum>=2){
            total_count = total_count+1;
        }
    }
    cout << total_count;
    return 0;
}
