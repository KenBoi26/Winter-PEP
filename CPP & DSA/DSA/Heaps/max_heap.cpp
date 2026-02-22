#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        while(index > 0){
            int parent = (index-1)/1;

            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }else{
                break;
            }
        }
    }

    void bubbleDown(){
        int index = 0;
        int size = heap.size();

        while(index < size){
            int left = 2*index + 1;
            int right = 2*index + 2;

            int largest = index;

            if(left < size && heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }

            if(largest != index){
                swap(heap[index], heap[largest]);
                index = largest;
            }else{
                break;
            }
        }

        
    }

    void insert(int value){
        heap.push_back(value);
        bubbleUp(heap.size()-1);
    }

    void deletion(){
        swap(heap[0], heap[heap.size()-1]);
        heap.pop_back();

        bubbleDown();
    }

};



int main(){


    return 0;
}