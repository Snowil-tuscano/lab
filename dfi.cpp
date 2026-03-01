#include <iostream>
using namespace std;

int main()
{
   int n ;
    cout<<"enter the size of the elements";
    cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   int num,pos=-1,comp=0;
   cout<<"enter the elemrnts need to be fiind";
   cin>>num;
   for(int i= 0 ; i< n ;i++){
    comp++;
          if(arr[i]==num){
            pos=i;
            break;
          }

   }

   if(pos!=-1){
    cout<<" element founf at "<<pos;
   }
   else
    cout<<"element not found ";

    cout<<"toal commparison "<<comp;
    return 0;
}