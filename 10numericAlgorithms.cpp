#include<bits/stdc++.h>
using namespace std;
int main(){

    //creating a vector of integers
    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    //accumulate algorithm to calculate the sum of all the elements in the vector arr
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout<<"Sum: "<<sum<<endl;
    //Output Sum: 150


    // inner_product algorithm to calculate the inner product of two vectors first and second
    vector<int>first={1,2,3};
    vector<int>second={3,4,5};

    int result = inner_product(first.begin(),first.end(),second.begin(),0);
    cout<<"Inner Product: "<<result<<endl;
    //Output Inner Product: 26 // 1*3 + 2*4 + 3*5 = 3 + 8 + 15 = 26


    // partial_sum algorithm to calculate the partial sum of the elements in the vector arr
    vector<int>vec(arr.size());
    partial_sum(arr.begin(), arr.end(),vec.begin());
    for(int x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
    //Output 10 30 60 100 150 // 10, 10+20, 10+20+30, 10+20+30+40, 10+20+30+40+50


   vector<int>ans(5);
   iota(ans.begin(), ans.end(), 200);
   for(int x:ans){
       cout<<x<<" ";
   }
    cout<<endl;
    //Output 200 201 202 203 204 // iota fills the range with sequentially increasing values starting from the given value (200 in this case)


}