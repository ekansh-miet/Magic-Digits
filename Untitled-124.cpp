#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long n,sum=0;
    cin>>n;
    int cnt=1;
    while(sum>9 || n>0)
    {
        if(n==0)
        {
            n = sum;
            sum = 0;
            cnt++;
        }
        sum += n%10;
        n /= 10;
    }
    cout<<cnt;
    return 0;
}