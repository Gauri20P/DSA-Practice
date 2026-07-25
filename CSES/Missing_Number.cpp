#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    long long int asum=0;
    long long int sum=(n*(n+1))/2;
    for (int i=0; i<n-1;i++){
    cin>>a[i];
    asum+=a[i];
    }
    long long int missingel= sum-asum;
    cout<<missingel;
    return 0;
}