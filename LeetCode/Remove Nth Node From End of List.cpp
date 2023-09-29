#include <bits/stdc++.h>
using namespace std;

int main() {
  /*
      class Solution {
      public:
          ListNode* removeNthFromEnd(ListNode* head, int n) {
              ListNode* p1 = head;
              ListNode* p2 = p1;

              if(!head->next) return NULL;

              while(n) {
                  p1 = p1 -> next;
                  if(!p1) p1 = head;
                  n--;
              }

              while(p1->next) {
                  p1 = p1->next;
                  p2 = p2->next;
              }

              if(p1 == p2) return head->next;

              p2->next = p2->next->next;

              return head;
          };
      };
  */
  return 0;
}