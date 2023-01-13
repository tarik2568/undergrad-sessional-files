#include <bits/stdc++.h>
using namespace std;
int main()
{
 string Root, confirmation;
 bool rootValidityFlag;
 struct Directory
 {
 string name;
 string root;
 };
 vector<Directory> directories;
 vector<string> rootlist;
 cout << "Enter name of root directory: ";
 cin >> Root;
 rootlist.push_back(Root);
options:
 cout << "Create more directories?(y/n)";
 cin >> confirmation;
 if (confirmation == "y")
 {
 Directory newDirectory;
 createNewDirectory:
 cout << "Where to create? ";
 cin >> newDirectory.root;
 rootValidityFlag = false;
 if (newDirectory.root != Root)
 {
 for (int i = 0; i < directories.size(); i++)
 {
 if (newDirectory.root == directories[i].name)
 {
 rootValidityFlag = true;
 break;
 }
 }
 if (!rootValidityFlag)
 {
cout << "invalid root" << endl;
 goto createNewDirectory;
 }
 }
 cout << "Enter directory name: ";
 cin >> newDirectory.name;
 if (std::find(rootlist.begin(), rootlist.end(), newDirectory.root) != rootlist.end())
 { }
 else {
 rootlist.push_back(newDirectory.root);
 }
directories.push_back(newDirectory);
goto options;
 }
 else if (confirmation != "n")
 {
 cout << "invalid input" << endl;
 goto options;
 }
 for (int i = 0; i < rootlist.size(); i++)
 {
 cout << rootlist[i] << " -> ";
 for (int j = 0; j < directories.size(); j++)
 {
 if (directories[j].root == rootlist[i])
 {
 cout << directories[j].name << " , ";
 }
 }
 cout << endl;
 }
return 0;
}
