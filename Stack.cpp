#include <bits/stdc++.h> 
void solve(stack<int>&inputStack, int count, int size) {
    //base case
    if(count == size/2) {
        inputStack.pop();
        return ;
    }
    
    int num = inputStack.top(); //stores top() element in num
    inputStack.pop(); //remove the top element
    
	//RECURSIVE CALL
    solve(inputStack, count+1, size); 
    
    inputStack.push(num); //after deleting middle element push the removed top() element in the stack
    
}



void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
    solve(inputStack, count, N);

}
