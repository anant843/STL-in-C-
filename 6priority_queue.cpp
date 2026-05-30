#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>pq; // Creation of max heap

    pq.push(10); // 10
    pq.push(20); // 20 10
    pq.push(5);  // 20 10 5

    pq.top(); // returns the maximum element in the priority queue, which is 20

    pq.pop(); // removes the maximum element from the priority queue, which is 20

    pq.size(); // returns the number of elements in the priority queue, which is 2

    pq.empty(); // returns true if the priority queue is empty, false otherwise, which is false

    //Swapping two priority queues
    priority_queue<int>first;
    first.push(1); 
    first.push(2);

    priority_queue<int>second;
    second.push(4); 
    second.push(5);

    first.swap(second); // swaps the contents of first and second priority queue
    //After swapping, first will contain 5 4 and second will contain 2 1


    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(20);// 20
    pq1.push(5);// 5 20
    pq1.push(10);// 5 10 20

    pq1.top(); // returns the minimum element in the priority queue, which is 5

    pq1.pop(); // removes the minimum element from the priority queue, which is 5

}