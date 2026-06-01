#include<bits/stdc++.h>
using namespace std;
int main(){

    // creating a vector of integers
    vector<int>arr={1,2,3,4,5};
    vector<int>arr1={4,5,6,7,8};

    
    // set_union algorithm to find the union of two sorted ranges arr and arr1 and store the result in arr
    vector<int>ans;
    set_union(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(ans,ans.begin()));
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 1 2 3 4 5 6 7 8 because set_union finds the union of two sorted ranges arr and arr1 and store the result in arr


    // set_intersection algorithm to find the intersection of two sorted ranges arr and arr1 and store the result in arr
    vector<int>ans2;
    set_intersection(arr1.begin(), arr1.end(), arr.begin(), arr.end(), inserter(ans2,ans2.begin()));
    for(int x:ans2){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 4 5 because set_intersection finds the intersection of two sorted ranges arr and arr1 and store the result in arr


    // set_difference algorithm to find the difference of two sorted ranges arr and arr1 and store the result in arr
    vector<int>ans3;
    set_difference(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(ans3,ans3.begin()));
    for(int x:ans3){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 1 2 3 because set_difference finds the difference of two sorted ranges arr and arr1 and store the result in arr


    // set_symmetric_difference algorithm to find the symmetric difference of two sorted ranges arr and arr1 and store the result in arr
    vector<int>ans4;
    set_symmetric_difference(arr.begin(), arr.end(), arr1.begin(), arr1.end(), inserter(ans4,ans4.begin()));
    for(int x:ans4){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 1 2 3 6 7 8 because set_symmetric_difference finds the symmetric difference of two sorted ranges arr and arr1 and store the result in arr

    
}