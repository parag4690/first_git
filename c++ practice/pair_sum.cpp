#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            
        }}
        
    }
    cout<<"new array";
    for(int i=0; i<n; i++){
        cout<<a[i];
    }

    //////////////  *** pair sum ****** //////////////
     cout<<"enter sum=";
     int sum;
    cin>>sum;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<" "<<endl;
            }
        }
    }

}