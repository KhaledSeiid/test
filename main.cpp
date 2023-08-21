#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool st(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first==p2.first)
    {
        return p1.second>p2.second;
    }
    return p1.first>p2.first;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
   fastIO();
    int n1;
    cin>>n1;
     for(int i=0 ; i<n1 ; i++)
     {
         int n;
         cin>>n;
         int arr1[n+1]={0};int arr2[n+1]={0};
         int counter=0;
         for(int j=0 ; j< n ;j++)
         {
             int num;cin>>num;
             if(num>=j)
                 arr1[num-j]++;
                 else
                    arr2[abs(num-j)]++;
         }
         long long res=0;
         for(int j=0 ; j< n+1 ;j++)
         {
            res +=arr1[j]*(arr1[j]-1)/2;
             res +=arr2[j]*(arr2[j]-1)/2;
         }
         cout<<res<<"\n";
     }

    return 0;
}
