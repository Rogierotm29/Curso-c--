#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> A){
    while(!A.empty()){
        cout << A.front() << " ";
        A.pop();
    }
}

int main(){

    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "First element is : " << myQueue.front() << endl;
    cout << "Last element is : " << myQueue.back() << endl;

    cout << "My queue : " << endl;
    printQueue(myQueue);


    return 0; 
}