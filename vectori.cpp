#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    int V[100];
    int loc;
    int k,maxim=-10000000;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>V[i];
    }
        cout<<"Initial\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<V[i]<<" ";
    }
    for(int i=1;j<=n-1;j++)
    {
        int minim=V[i];
        int loc=1;
    }
    for(int j=i+1;j<=n;j++)
    {
        if(V[j<minim]){minim=V[j];loc=j}
    }
    int aux;
    aux=V[i];
    V[i]=V[loc];
    V[loc]=aux;
    cout<<endl<<"Sortate"<<endl;
    for(int i=1;i<=n;j++){cout<<V[i]<<" ";
    return 0;
}


