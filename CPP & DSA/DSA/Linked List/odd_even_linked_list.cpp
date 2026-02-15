#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

ListNode* oddEvenList(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenStart = even;

    while(even != nullptr && even->next != nullptr){
        odd->next = even->next;
        odd = odd->next;
        
        even->next = odd->next;
        even = even->next;
        
    }

    odd->next = evenStart;

    return head;
}


int main(){


    return 0;
}