#include <iostream>
#include "DLList.h"
#include "DLLNode.h"

const int EMPTY_LIST = 1;

using namespace std;

DLList::~DLList(){
  if(head == nullptr){
    return;
  }
  for(DLLNode *tmp = head->next; tmp != nullptr; tmp = tmp->next){
    delete tmp->prev;
  }
  delete tail;
}

void DLList::addToDLLHead(int el){
  DLLNode *tmp = head;
  head = new DLLNode(el,head);
  head->prev = nullptr;
  if(tail == nullptr)
    tail = head;
  else
    head->next = tmp;
}

void DLList::addToDLLTail(int el){
  if(tail != nullptr){
    tail = new DLLNode(el, nullptr, tail);
    tail->prev->next = tail;
  }
  else head = tail = new DLLNode(el);
}

void DLList::deleteFromHead(){
  if(head != nullptr){
    int el = head->info;
    DLLNode *tmp = head;
    if(head == tail)
      head = tail = nullptr;
    else{
      head = head->next;
      head->prev = nullptr;
    }
    delete tmp;
    return el;
    cout << el;
  }
  else throw(EMPTY_LIST);
}

int DLList::deleteFromTail(){
  if(head != nullptr){
    int el = tail->info;
    if(head == tail){
      delete tail;
      head = tail = nullptr;
    }
    else{
      tail = tail->prev;
      delete tail->next;
      tail->next = nullptr;
    }
    return el;
    cout << el;
  }
  else throw(EMPTY_LIST);
}

void DLList::deleteNode(int el){
  if(head != nullptr){
    if(head == tail&& el == head->info){
      delete head;
      head = tail = nullptr;
    }
    else{
      if(el == head->info){
        DLLNode *tmp = head;
        head = head->next;
        head->prev = nullptr;
        delete tmp;
      }
      else{
        DLLNode *pred, *tmp;
        for(pred=head,tmp=head->next; tmp!=nullptr && tmp->info!=el; pred=pred->next,tmp=tmp->next);
        if(tmp != nullptr)
          pred->next = tmp->next;
        if(tmp == tail)
          tail = pred;
        delete tmp;
      }
    }
  }
}

bool DLList::isInList(int el){
  DLLNode *tmp;
  for(tmp=head; tmp!=nullptr && tmp->info!=el; tmp=tmp->next);
  return(tmp != nullptr);
}

void DLList::addSorted(int i){
  DLLNode* newNode = new DLLNode(i);
  DLLNode *tmp;
  if(head == nullptr)
    head = newNode;
  else if(head->info >= newNode->info){
    newNode->next = head;
    newNode->next->prev = newNode;
    head = newNode;
  }
  else{
    tmp = head;
    while(tmp->next != nullptr && tmp->next->info < newNode->info)
      tmp = tmp->next;
    newNode->next = tmp->next;
    if(tmp->next != nullptr)
      newNode->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
  }
  cout << "Integer added." << endl;
}

void DLList::printlist(){
  DLLNode *tmp;
  tmp = head;
  while(tmp != nullptr){
    cout << tmp->info << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
