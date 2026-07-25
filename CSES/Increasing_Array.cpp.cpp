#include <iostream>
using namespace std;
int main()
{
    long long int n;
    long long int moves=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++){
        if (a[i]>a[i+1]){
        moves+= (a[i]-a[i+1]);
        a[i+1]=a[i];
            }
    }
    cout<<moves;
    return 0;
}