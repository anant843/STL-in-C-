#include<bits/stdc++.h>
using namespace std;
int main(){

list<int>l; // Creation of list

//insertion
l.push_back(10);//10

l.push_back(20);//10 20

l.push_front(5);//5 10 20

l.pop_back();//5 10

l.pop_front();//10

l.size(); // returns the number of elements in the list

l.clear(); // removes all elements from the list

l.empty(); // returns true if the list is empty, false otherwise

l.front(); // returns the first element of the list

l.back(); // returns the last element of the list

list<int>::iterator it = l.begin(); // declaring an iterator for the list
while(it!=l.end()){
    cout<<*it<<" ";
    it++;   
}

l.remove(10); // removes all occurrences of 10 from the list

//Swapping two lists
list<int>first={1,2,3};
list<int>second={4,5,6};

first.swap(second); // swaps the contents of first and second list
//After swapping, first will contain 4 5 6 and second will contain 1 2 3

second.insert(second.begin(), 0); // inserts 0 at the beginning of the second list

first.erase(first.begin(),first.end()); // removes all elements from the first list using erase() function

}