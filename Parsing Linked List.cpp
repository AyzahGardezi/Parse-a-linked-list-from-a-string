#include <iostream>
#include <string>
using namespace std;

Node *parse(const std::string& str) {
  if (str == "nullptr")
    return NULL;
  else
  {
    Node *root = NULL, *tail = NULL;
    int end = str.length() - 11;
    
    for (int i = 0; i < end; i++)
      {
        int num = 0;
        while (str[i] != ' ')
        {
            num = (num * 10) + (str[i] - '0');
            i++;
        }
          i+=3;
          Node *newNode = new Node(num, NULL);
          if (root == NULL)
          {
            root = newNode;
            tail = newNode;
          }
          else
            tail->next = newNode;
            tail = newNode;
    }
  return root;
  }
  
}
