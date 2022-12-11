#include <iostream>
#include "DLLNode.h"

using namespace std;

#ifndef _DLL
#define _DLL

class DLList{
  public :
    DLLNode *head, *tail;
    DLList () {head = tail = nullptr;}
    ~DLList();
    void addToDLLHead(int);
    void addToDLLTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    bool isInList(int);
    void addSorted(int);
    void printlist();
};
#endif
