#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[1000000];

int main() {
    ll n,min,loc;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    ll temp;
   //Buble Sort ::   complexity =o(n*n)
    /*for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
         }
       }
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    //Selection Sort ::    //complexity =o(n*n)
     
    /*for(int i=0;i<n-1;i++){
       min=i;
       for(int j=i+1;j<n;j++){
         if(arr[j]<arr[min]){
           min=j;
         }
       }
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
    }

    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }*/

  ///Insertion sort


    int x,j;
    for(int i=0;i<n;i++){
       x=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>x){
         arr[j+1]=arr[j];
         j--;
       }
       arr[j+1]=x;
    }
    
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}