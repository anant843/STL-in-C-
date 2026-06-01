#include<bits/stdc++.h>
using namespace std;
int main(){

    // creating a vector of integers
    vector<int>arr(5);
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;
    arr[3]=5;
    arr[4]=6;


    // binary search algorithm to find the element in the vector 
    bool found = binary_search(arr.begin(),arr.end(),3);
    cout << found << endl;
    // Output 1 because 3 is present in the vector arr


    // lower_bound algorithm to find the first element which is greater or equal to the target element in the vector arr
    auto it = lower_bound(arr.begin(), arr.end(), 3);
    cout << *it << endl;
    // Output 4 because 4 is the first element which is not less than 3


    // upper_bound algorithm to find the first element which is greater than the target element in the vector arr
    auto it2 = upper_bound(arr.begin(), arr.end(), 2);
    cout << *it2 << endl;
    // Output 4 because 4 is the first element which is greater than 2


    // equal_range algorithm to find the range of the target element in the vector arr
    auto it3= equal_range(arr.begin(), arr.end(), 4);
    cout<<*it3.first << " " << *it3.second << endl;
    // Output 4 5 because 4 is the first element which is not less than 4 and 5 is the first element which is greater than 4
    // It is a range betwween the lower bound and upper bound of the target element in the vector arr
   
    //find minimum element in the vector arr
    auto minmax = min_element(arr.begin(), arr.end());
    cout<<*minmax<<endl;
    // Output 1 because 1 is the minimum element in the vector arr


    //find maximum element in the vector arr
    auto maxmax = max_element(arr.begin(), arr.end());
    cout<<*maxmax<<endl;
    // Output 6 because 6 is the maximum element in the vector arr

    // find the minimum and maximum element in the vector arr
    auto minmax2 = minmax_element(arr.begin(), arr.end());
    cout<<*minmax2.first<<" "<<*minmax2.second<<endl;
    // Output 1 6 because 1 is the minimum element and 6 is the maximum element in the vector arr
    
}