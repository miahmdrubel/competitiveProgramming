

#include<bits/stdc++.h>
using namespace std;

   string linear_Search(string arr[], int n, string x){
          int i;
            for(i=0;i<n;i++){
                  if(arr[i]==x){
                    return arr[i];

                  }
                // return arr[0] ; //Element is not Found in this List of Array

            }
            return arr[0] ;


   }


int main(){
 string arr[] = {"Rubel","Shuvo","Apu","Rajon","Alamin"};
 int n = sizeof(arr)/sizeof(arr[0]);

 string x ="Shu";
  string index = linear_Search(arr,n,x);

    if( index == arr[0]){
       cout<<"Element is Not Present in this array.\n";
    }else{
      cout<<"Element is Present in Position "<< index << endl;
    }

return 0;
}
