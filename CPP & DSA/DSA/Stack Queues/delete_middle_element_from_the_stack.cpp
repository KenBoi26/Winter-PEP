#include <bits/stdc++.h> 
using namespace std;

void deletFromStack(stack<int> &inputStack, int count, int size){
   if(inputStack.empty() || count == size/2){
      inputStack.pop();
      return;
   }
   int temp = inputStack.top();
   inputStack.pop();
   deletFromStack(inputStack, count+1, size);
   inputStack.push(temp);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   deletFromStack(inputStack, 0, N);
   
}