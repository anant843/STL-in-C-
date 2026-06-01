#include<bits/stdc++.h>
using namespace std;

//Defining the function
void printDouble(int x){
    cout<<x*2<<" ";
}  

bool checkEven(int x){
    return x%2==0;
}

int main(){

    //creating a vector of integer  s
    vector<int>arr(5);
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=4;

   // for_each algorithm to apply the function printDouble to each element of the vector arr    
   for_each(arr.begin(),arr.end(),printDouble);
   // Output 2 4 6 8 8


   // find algorithm to find the target element in the vector arr
   int target=4;
   auto it=find(arr.begin(),arr.end(),target);
   cout<<endl<<*it<<endl;
   // Output 4

  
   // find_if algorithm to find the first element specified by the condition in the vector arr
   auto it2=find_if(arr.begin(),arr.end(),checkEven);
   cout<<*it2<<endl;
   //Output 2


  // count algorithm to count the number of occurrences of the target element in the vector arr
   int ans= count(arr.begin(),arr.end(),target);
   cout<<ans<<endl;
   // Output 2


   // count_if algorithm to count the number of elements specified by the condition in the vector arr
   int count2=count_if(arr.begin(),arr.end(),checkEven);
   cout<<count2<<endl;
   // Output 3


  // sort algorithm to sort the vector arr
   sort(arr.begin(),arr.end());
   for(int a:arr){
       cout<<a<<" ";
   }
   cout<<endl;
   // Output 1 2 3 4 4


   // reverse algorithm to reverse the vector arr
   reverse(arr.begin(),arr.end());
   for(int a:arr){
       cout<<a<<" ";
   }
    cout<<endl;
   // Output 4 4 3 2 1


   // rotate the vector arr from the beginning to the end by 2 positions
   rotate(arr.begin(),arr.begin()+2,arr.end());
   for(int a:arr){
       cout<<a<<" ";
   }
    cout<<endl;
    // Output 3 2 1 4 4


   // unique algorithm to remove the duplicate elements from the vector arr
    auto it3=unique(arr.begin(),arr.end());
    //before it3 the values are 3 2 1 4 and after it3 the values are 3 2 1 4 and the rest of the values are garbage values
    arr.erase(it3,arr.end());// erase the garbage values from the vector arr
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    // Output 3 2 1 4


    // partition algorithm to partition the vector arr based on the condition specified by the function checkEven
    partition(arr.begin(),arr.end(),checkEven);
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    // Output 2 4 3 1


}