#include <iostream>
#ifndef _DLL_NODE
#define _DLL_NODE

class DLLNode{
  friend class DLList;
    public :
      int info;
      DLLNode *next, *prev;
      DLLNode(int el, DLLNode *n = nullptr, DLLNode *p = nullptr){
        info = el;
        next = n;
        prev = p;
      }
  /*protected :
    int info;
    DLLNode *next, *prev, */
};
#endif
