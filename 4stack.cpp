#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>s;//creation

    s.push(10);
    s.push(20);
    s.push(30);//10 20 30 Insert elements

    s.pop();//10 20 Delete the top element

    s.size(); // returns the number of elements in the stack

    s.top(); // returns the top element of the stack

    s.empty(); // returns true if the stack is empty, false otherwise

    //Swapping two stacks
    stack<int>first;
    first.push(1);
    first.push(2);
    stack<int>second;
    second.push(4);
    second.push(5);

    first.swap(second); // swaps the contents of first and second stack
    //After swapping, first will contain 4 5 and second will contain 1



}