#include "DLList.h"
#include "DLLNode.h"
#include <iostream>

using namespace std;

int main(){
  int value1, value2, value3, value4, value5;
  int newhead1, newtail1, find1;
  int addsorted2, find2;
  int newhead3;
  int newhead4;
  int run = 1;
  
  DDList myList;
  
  cout << "(1) Create Simple (Unsorted) List" << endl;
  cout << "(2) Create Sorted List" << endl;
  cout << "(3) Create Queue (FIFO)" << endl;
  cout << "(4) Create Stack (LIFO)" << endl;
  cout << "(5) Exit Program" << endl;
  cin >> value1;
  
  while(run != 0){
    switch(value1){
      case 1 :
        cout << "(1) Enter integer for insertion at head of list" << endl;
        cout << "(2) Enter integer for insertion at tail of list" << endl;
        cout << "(3) Display and delete integer from head of list" << endl;
        cout << "(4) Display and delete integer from tail of list" << endl;
        cout << "(5) Search for integer in list, and delete that node" << endl;
        cout << "(6) Display contents of list from head to tail, in order" << endl;
        cout << "(7) Exit Program" << endl;
        cin >> value2;
        switch(value2){
          case 1 :
            cout << "Please enter an integer for insertion :" << endl;
            cin >> newhead1;
            cout << endl;
            myList.addToDLLHead(newHead1);
            break;
          case 2 :
            cout << "Please enter an integer for insertion :" << endl;
            cin >> newtail1;
            cout << endl;
            myList.addToDLLTail(newtail1);
            break;
          case 3 :
            cout << "Deleting integer from head :" << endl;
            try{
              myList.deleteFromHead();
            } catch(int error_code){
              cout << "Error" << endl;
            }
            break;
          case 4 :
            cout << "Deleting intefer from tail :" << endl;
            try{
              myList.deleteFromTail();
            } catch(int error_code){
              cout << "Error" << endl;
            }
            break;
          case 5 :
            cout << "Please enter an integer to search for :" << endl;
            cin >> find1;
            cout << endl;
            if(myList.isInList(find1))
              myList.deleteNode(find1); //throw
            break;
          case 6 :
            cout << "Printed list :" << endl;
            myList.printlist();
            break;
          case 7 :
            run = 0;
            //value1 = 5;
            cout < "Exiting." << endl;
            break;
          default :
            cout << "Please pick a new number." << endl;
            break;
        }
        break;
        
      case 2 :
        cout << "(1) Enter integer for sorted insertion (increasing order) into list" << endl;
        cout << "(2) Search and delete integer, if present in list" << endl;
        cout << "(3) Display contents of sorted list of integers, in increasing order" << endl;
        cout << "(4) Exit program" << endl;
        cin >> value3;
        switch(value3){
          case 1 :
            cout << "Please enter an integer for insertion :" << endl;
            cin >> addsorted2;
            cout << endl;
            myList.addSorted(addsorted2);
            break;
          case 2 :
            cout << "Please enter an integer to find :" << endl;
            cin >> find2;
            cout << endl;
            if(myList.isInList(find2))
              myList.deleteNode(find2); //throw
            break;
          case 3 :
            cout << "Printed list :" << endl;
            myList.printlist();
            break;
          case 4 :
            cout << "Exiting" << endl;
            run = 0;
            break;
          default : 
            cout << "Please pick a new number." << endl;
            break;
        }
        break;
        
      case 3 :
        cout << "(1) ENQUEUE" << endl;
        cout << "(2) DEQUEUE" << endl;
        cout << "(3) PRINT QUEUE" << endl;
        cout << "(4) Exit Program" << endl;
        cin >> value4;
        switch(value4){
          case 1 :
            cout << "Please enter an integer for insertion :" << endl;
            cin >> newhead3;
            cout << endl;
            myList.addToDLLHead(newhead3);
            break;
          case 2 :
            cout << "Deleting integer from head :" << endl;
            try{
              myList.deleteFromHead();
            } catch(int error_code){
              cout << "Error" << endl;
            }
            break;
          case 3 :
            cout << "Printed list :" << endl;
            myList.printlist();
            break;
          case 4 :
            cout << "Exiting" << endl;
            run = 0;
            break;
          default :
            cout << "Please pick a new number." << endl;
            break;
        }
        break;
        
      case 4 :
        cout << "(1) PUSH" << endl;
        cout << "(2) POP" << endl;
        cout << "(3) PRINT STRING" << endl;
        cout << "(4) Exit program" << endl;
        cin >> value5;
        switch(value5){
          case 1 :
            cout << "Please enter an integer for insertion :" << endl;
            cin >> newhead4;
            cout << endl;
            myList.addToDLLHead(newhead4);
            break;
          case 2 :
            cout << "Deleting integer from tail :" << endl;
            try{
              myList.deleteFromTail();
            } catch(int error_code){
              cout << "Error" << endl;
            }
            break;
          case 3 :
            cout << "Printed list :" << endl;
            myList.printlist();
            break;
          case 4 :
            cout << "Exiting." << endl;
            run = 0;
            break;
          default :
            cout << "Please pick a new number." << endl;
            break;
        }
        break;
      
      case 5 :
        cout << "Exiting program." << endl;
        run = 0;
        break;
        
      default :
        cout << "Please pick a new number." << endl;
        break;
    }
  }
}
