#include <iostream>
using namespace std;
int main()
{
 int a[10],b,n,i,pos,ele;
 label:
 cout<<"Array Creation..\nEnter the number of elements in array:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
 cout<<"Array "<<i<<" element:";
 cin>>a[i];
 }
 cout<<"Array Elements:\n i\t";
 for(i=1;i<=n;i++)
 {
 cout<<i<<"\t";
 }
 cout<<"\nA[i]\t";
 for(i=1;i<=n;i++)
 {
 cout<<a[i]<<"\t";
 }
 cout<<"\n\nEnter the element to insert";
 cin>>ele;
 cout<<"Enter your choice:\n1. to Insert after array\n2. to insert at a position in array\n";
 cin>>b;
 n=n+1;
 if (b==1)
 {
 pos=n;
 }
 else if(b==2)
 {

 cout<<"Enter the position to insert in array:";
 cin>>pos;
 for(i=n-1;i>=pos;i--)
 {
 a[i+1]=a[i];
 }
 }
 else
 {
 cout<<"Enter correct choice.";
 goto label;
 }
 a[pos]=ele;
 cout<<"\nArray Elements after insertion:\n i\t";
 for(i=1;i<=n;i++)
 {
 cout<<i<<"\t";
 }
 cout<<"\nA[i]\t";
 for(i=1;i<=n;i++)
 {
 cout<<a[i]<<"\t";
 }
 return 0;
}