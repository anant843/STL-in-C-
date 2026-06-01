#include<bits/stdc++.h>
using namespace std;
int main(){

    // creating a vector of integers
    vector<int>arr;
    arr.push_back(22);
    arr.push_back(33);
    arr.push_back(11);


    // make_heap algorithm to create a max heap from the vector arr
    make_heap(arr.begin(), arr.end()); // O(n) time complexity
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 33 22 11 because make_heap creates a max heap from the vector arr


    // push_heap algorithm to add an element to the max heap created from the vector arr
    arr.push_back(44);
    push_heap(arr.begin(), arr.end()); // O(log n) time complexity
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 44 33 22 11 because push_heap adds the element 44 to the max heap created from the vector arr and maintains the max heap property


    // pop_heap algorithm to remove the maximum element from the max heap created from the vector arr
    pop_heap(arr.begin(), arr.end());// O(log n) time complexity
    arr.pop_back();
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 33 22 11 because pop_heap shift the maximum element to the end of the vector arr and removes it from the vector using pop_back() and maintains the max heap property


    // sort_heap algorithm to sort the elements in the max heap created from the vector arr
    sort_heap(arr.begin(), arr.end());// O(n log n) time complexity
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // Output 11 22 33 because sort_heap sorts the elements in the max heap created from the vector arr in ascending order


}