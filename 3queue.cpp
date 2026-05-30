#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q; // declaring a queue

    //insertion
    q.push(10); //10

    q.push(20); //10 20

    q.push(30); //10 20 30

    q.pop(); //20 30

    q.size(); // returns the number of elements in the queue

    q.empty(); // returns true if the queue is empty, false otherwise

    q.front(); // returns the first element of the queue

    q.back(); // returns the last element of the queue

    //Swapping two queues
    queue<int>first;
    first.push(1);
    first.push(2);
    queue<int>second;
    second.push(4);
    second.push(5);
    
    first.swap(second); // swaps the contents of first and second queue
    //After swapping, first will contain 4 5 and second will contain 1 2  
    
    

}