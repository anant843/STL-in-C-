#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int>d; // Creation of deque

    d.push_back(10); // 10  
    d.push_back(20); // 10 20

    d.push_front(5); // Adding element at the front of the deque, 5 10 20

    d.pop_back(); // Removing element from the back of the deque, 5 10

    d.pop_front(); // Removing element from the front of the deque, 10

    d.size(); // returns the number of elements in the deque

    d.empty(); // returns true if the deque is empty, false otherwise

    d.front(); // returns the first element of the deque

    d.back(); // returns the last element of the deque

    //Swapping two deques
    deque<int>first;
    first.push_back(1);
    first.push_back(2);

    deque<int>second;
    second.push_back(4);
    second.push_back(5);

    first.swap(second); // swaps the contents of first and second deque
    //After swapping, first will contain 4 5 and second will contain 1

    deque<int>::iterator it = first.begin(); // declaring an iterator for the deque
    while(it!=first.end()){
        cout<<*it<<" ";
        it++;   
    }   

    d.at(0)=100; // assigning and modifying the value of deque using at()

    d[3]; // accessing the value of deque using operator[]

    d.at(3); // accessing the value of deque using at()

    d.erase(d.begin(),d.end()); // removes all elements from the deque using erase() function

    d.clear(); // removes all elements from the deque using clear() function

    d.insert(d.begin(), 50); // inserts 50 at the beginning of the deque

    d.insert(d.end(), 60); // inserts 60 at the end of the deque

}