#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream input;
    input.open("tuan.txt", ios::out);
    srand(time(NULL));
    int m;
    cout<<"m: ";
    cin>>m;
    double **a=new double*[m+1];
    for(int i=1;i<=m;i++)
        a[i]=new double[m+1];
    double **b=new double*[m+1];
    for(int i=1;i<=m;i++)
        b[i]=new double[m+1];
    double **c=new double*[m+1];
    for(int i=1;i<=m;i++)
        c[i]=new double[m+1];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            a[i][j]=-10+rand()%21;
    cout<<"Matrix B:"<<endl;
    input<<"Matrix B:"<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
                input<<a[i][j]<<" ";
            }
            cout<<endl;
            input<<endl;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            if(i==j)
                a[i][j]-=1;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            b[i][j]=-10+rand()%21;
    cout<<"Matrix A:"<<endl;
    input<<"Matrix A:"<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<<b[i][j]<<" ";
                input<<b[i][j]<<" ";
            }
            cout<<endl;
            input<<endl;
    }
    cout<<"Matrix E:"<<endl;
    input<<"Matrix E:"<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++)
            {
                if(i==j) c[i][j]=1;
                else c[i][j]=0;
                cout<<c[i][j]<<" ";
                input<<c[i][j]<<" ";
            }
                cout<<endl;
                input<<endl;
    }
    cout<<"Matrix C:"<<endl;
    input<<"Matrix C:"<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            c[i][j]=1/(double)(i+j);
            cout<<c[i][j]<<" ";
            input<<c[i][j]<<" ";
        }
        cout<<endl;
        input<<endl;
    }
    cout<<"B - E = "<<endl;
    input<<"B - E = "<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
                input<<a[i][j]<<" ";
            }
        cout<<endl;
        input<<endl;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            c[i][j]=0;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            for(int k=1;k<=m;k++)
                c[i][j]+=b[i][k]*a[k][j];
    cout<<"A*(B-E)= "<<endl;
    input<<"A*(B-E)= "<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<<c[i][j]<<" ";
                input<<c[i][j]<<" ";
            }
        cout<<endl;
        input<<endl;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            b[i][j]=1/(double)(i+j);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
            a[i][j]=c[i][j]+b[i][j];
    cout<<"M= "<<endl;
    input<<"M= "<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
                input<<a[i][j]<<" ";
            }
            cout<<endl;
            input<<endl;
    }
    for(int i=1;i<=m;i++)
        delete a[i];
    delete[]a;
    for(int i=1;i<=m;i++)
        delete b[i];
    delete[]b;
    for(int i=1;i<=m;i++)
        delete c[i];
    delete[]c;
    input.close();
}
