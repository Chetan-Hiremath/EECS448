#include "Test.h"
#include <iostream>
using namespace std;

void test1()
{
  Queue q;
  bool testCase1 = false;
  testCase1 = q.isEmpty();
  std:: cout << boolalpha;
  if (testCase1 = true)
  {
    std:: cout << "Test 1: Newly created Queue is empty: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 1: Newly created Queue is empty: FAILED." << std:: endl; 
  }
}

void test2()
{
  Queue q;
  bool testCase2 = true;
  testCase2 = q.isEmpty();
  q.enqueue(1);
  if (testCase2 = true)
  {
    std:: cout << "Test 2: Enqueing a value makes the Queue not empty: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 2: Enqueing a value makes the Queue not empty: FAILED." << std:: endl;
  }  
}

void test3()
{
  Queue q;
  int testCase3;
  q.enqueue(5);
  testCase3 = q.peekFront();
  if (testCase3 = 5)
  {
    std:: cout << "Test 3: Enqueue 5 on empty queue then peekFront returns 5: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 3: Enqueue 5 on empty queue then peekFront returns 5: FAILED." << std:: endl;
  } 
}

void test4()
{
  Queue q;
  bool testCase4 = true;
  q.enqueue(10);
  q.dequeue();
  testCase4 = q.isEmpty();
  if (testCase4 = true)
  {
    std:: cout << "Test 4: Dequeing a value makes the Queue empty: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 4: Dequeing a value makes the Queue empty: FAILED." << std:: endl;
  }
}

void test5()
{
  Queue q;
  int testCase5;
  q.enqueue(5);
  q.enqueue(15);
  testCase5 = q.peekFront();
  if (testCase5 == 15)
  {
    std:: cout << "Test 5: Enqueue 5 and 15 on empty queue then peekFront returns 15: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 5: Enqueue 5 and 15 on empty queue then peekFront returns 15: FAILED." << std:: endl;
  } 
}

void test6()
{
  Queue q;
  bool testCase6 = true;
  q.enqueue(5);
  q.enqueue(15);
  q.dequeue();
  q.dequeue();
  testCase6 = q.isEmpty();
  if (testCase6 = true)
  {
    std:: cout << "Test 6: Dequeing 2 values for 2 times makes the Queue empty: PASSED." << std:: endl;
  }
  else
  {
    std:: cout << "Test 6: Dequeing 2 values for 2 times the Queue empty: FAILED." << std:: endl;
  }
}
