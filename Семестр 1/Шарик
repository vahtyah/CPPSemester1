#include <bits/stdc++.h>
#define Max 20
using namespace std;
 int n,sum=0;
 int Bool[Max]={0};
 int A[Max];

 void Xuat(int n)
 {
     for(int i=1;i<=n;i++)
     {
         if(A[i]==i)
            sum++;
     }
 }

 void perestanovka(int k)
 {
     for(int i=1;i<=n;i++)
     {
         if(!Bool[i])
         {
             A[k]=i;
             Bool[i]=1;
             if(k==n) Xuat(n);
             else perestanovka(k+1);
             Bool[i]=0;
         }
     }
 }

 int main()
 {
     cout<<"Enter n: ";
     cin>>n;
     perestanovka(1);
     cout<<sum;
     return 0;
 }
