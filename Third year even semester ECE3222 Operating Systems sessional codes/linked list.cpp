#include <bits/stdc++.h>
using namespace std;
class Node {
public:
int data;
Node* address;
};
void printList(Node* n)
{
while (n != NULL) {
cout << n->data << " ";
n = n->address;
}
}
int main()
{
Node* head = NULL;// allocate 3 nodes in the heap. We have pointers to these
three blocks as head,
second and third
Node* second = NULL;
Node* third = NULL;
// allocate 3 nodes in the heap
head = new Node();
second = new Node();
third = new Node();
cin>>head->data; // assign data in first node
head->address = second; // Link first node with second
cin>>second->data ; // assign data to second node
second->address = third;
cin>>third->data ; // assign data to third node
third->address = NULL;
printList(head);
return 0;
}
