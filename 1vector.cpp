#include<bits/stdc++.h>
using namespace std;
int main(){

 vector<int>v; //  Creation of vector

 vector<int>v2(4); // declaring vector of size 4

 vector<int>v(15,0); // declaring vector of size 15 and initializing all elements to 0

 *(v.begin()) = 10; // assigning value to first element of vector

 *(v.end()-1) = 20; // assigning value to last element of vector

 *(v.begin()); // accessing first element of vector

 *(v.end()-1); // accessing last element of vector

 v.push_back(100); // adding element to the end of vector

 v.pop_back(); // removing last element of vector

 v.size(); // returns the number of elements in the vector

 v.front(); // returns the first element of the vector

 v.back(); // returns the last element of the vector

 v2.empty(); // returns true if the vector is empty, false otherwise

 v[1]=100; // assigning  and modifying the value of vector

 v.at(0)=90; // assigning and modifying the value of vector using at()
 
 v.at(0); // accessing the value of vector using at()

vector<int> v = {1,2,3,4};
v.push_back(6);
cout<<v.capacity(); // returns the total capacity of the vector

vector<int>d;
d.reserve(100); // reserves space for 100 elements in the vector

d.max_size(); // returns the maximum number of elements that the vector can hold and size depend on the system and compiler implementation

v.size(); // returns the number of elements in the vector

v.clear(); // removes all elements from the vector

v.insert(v.begin(), 50); // inserts 50 at the beginning of the vector

v.insert(v.end(), 60); // inserts 60 at the end of the vector

v.erase(v.begin()); // removes the first element of the vector

vector<int>first={1,2,3};
vector<int>second={4,5,6};


//Swapping two vectors
first.swap(second); // swaps the contents of first and second vector

for(int i:first){
    cout<<i<<" "; // 4 5 6
}
for(int i:second){
    cout<<i<<" "; // 1 2 3
}


vector<int>::iterator it = first.begin(); // declaring an iterator for the first vector
while(it!=first.end()){
    cout<<*it<<" ";
    it++;
}


//2D array/vector
vector<vector<int>>vec1(3, vector<int>(4,0)); // declaring a 2D vector of size 3x4 and initializing all elements to 0

int row=vec1.size(); // returns the number of rows in the 2D vector
int col=vec1[0].size(); // returns the number of columns in the 2D vector


// declaring a 2D vector with different number of columns in each row
vector<vector<int>>vec(4);
vec[0]=vector<int>(4);
vec[1]=vector<int>(2);
vec[2]=vector<int>(3);
vec[3]=vector<int>(5);


}














