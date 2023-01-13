#include <iostream>
using namespace std;
int groups[502][502];
int address[502][502];
int main() {
 int i, j, x;
 int n, head, group_num, last_block;
 cout << "Number of groups: ";
 cin >> group_num;
 cout << "Number of blocks in each group: ";
 cin >> n;
 cout << "Address of first free block: ";
 cin >> head;
 address[head][1] = head;
 groups[1][1] = head;
 cout << "Rest addresses are: ";
 for(i = 2; i <= n; i++) {
 cin >> x;
 address[head][2] = x;
 groups[1][2] = x;
 }
 last_block = x;
 cout << "Addresses of all groups:\n";
 for(i = 2; i <= group_num; i++) {
 for(j = 1; j <= n; j++) {
 cin >> x;
 groups[i][j] = x;
 address[last_block][j] = x;
 }
 last_block = x;
 }
 ///1
 cout << "Enter group number: ";
 cin >> x;
 cout << "List of addresses in group number " << x << ":\n";
 for(i = 1; i <= n; i++) {
 cout << groups[x][i] << endl;
 }
 ///2
 cout << "Enter the address of the last block: ";
 cin >> x;
 if(x != last_block) {
 cout << "Next n number of addresses are:\n";
 for(i = 1; i <= n; i++) {
 cout << address[x][i] << endl;
 }
 cout << endl;
 }
 else {
 cout << "There is no free blocks after that block." << endl;
 }
 return 0;
}
