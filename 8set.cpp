#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_set<int>s;// creation of unordered set

    s.insert(1);// insertion of element in the set
    s.insert(2);
    s.insert(3);

    s.size();// size of the set

    s.clear();// clear the set

    s.empty();// check if the set is empty or not

    s.find(1);// find the element 1 in the set

    s.erase(1);// erase the element 1 from the set

    s.erase(s.begin());// erase the element at the beginning of the set

    //Traverse the set using iterator
    unordered_set<int>::iterator it=s.begin();// iterator to the beginning of the set
    while(it!=s.end()){
        cout<<*it<<" ";// dereference the iterator to get the element
        it++;
    }

    // find the element 1 in the set using count() function

    if(s.count(1)==1){// check if the element 1 is present in the set or not
        cout<<"Element is present in the set"<<endl;
    }
    else{
        cout<<"Element is not present in the set"<<endl;
    }

    // find the element 1 in the set using find() function
    if(s.find(1)!=s.end()){// check if the element 1 is present in the set or not
        cout<<"Element is present in the set"<<endl;
    }
    else{
        cout<<"Element is not present in the set"<<endl;
    }

    //Ordered Set
    set<int>s1;// creation of ordered set

    s1.insert(1);// insertion of element in the set
    s1.insert(5);
    s1.insert(3);

    // In ordered set, the elements are stored in sorted order. 

    //Complexity of insertion, deletion and search in unordered set is O(1) on average and O(n) in worst case but in ordered set the complexity of insertion, deletion and search is O(log n) because it uses balanced binary search tree to store the elements.

}