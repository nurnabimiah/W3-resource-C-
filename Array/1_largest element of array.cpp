
#include<iostream>
using namespace std;
int main()
{

    int i,j,n;
    int a[100];
    cout<< "How many takes the number: ";
    cin>>n;
    cout<<endl;
    cout<< "Orginal Array: ";

    for(i=0; i<=n; i++)
    {
        cin>> a[i];
    }


    for(j=0; j<=n; j++)
    {

        if(a[0]<a[j])
        {
            a[0]=a[j];
        }
    }

  cout<<"Largest element of the said array :"<<a[0];


}
