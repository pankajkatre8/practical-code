#include<iostream>
#define ms 10
using namespace std;

int a;
template<class T>
void selection(T S[ms])
{
    T temp;
    int i,j;
    for(i=0 ; i<=a-2;i++)
    {
        int mini=i;
        for(j=i+1;j<=a;j++)
        {
            if(S[j]<S[mini])
            {
                mini=j;
            }
            
        }
        swap(S[i],S[mini]);
    }
    cout<<"\nSorted list :"<<endl;
    for(i=0;i<a;i++)
    {
        cout<<S[i]<<" ";
    }
}
int main()
{
    int A[ms];
    float B[ms];
    cout<<"Selection sort\n";
    cout<<"Integer element "<<endl;
    cin>>a;
    cout<<"Enter the integer element "<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    selection(A);
    cout<<"float elements"<<endl;
    cout<<"Enter how many elements you want "<<endl;
    cin>>a;
    cout<<"enter the float elements "<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>B[i];
    }
    selection(B);
    return 0;
}