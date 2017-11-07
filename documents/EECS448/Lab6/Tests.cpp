/*
*	Tests.cpp
*	Menita Vedantam
*	November 7, 2017
*	Tests class implementation file
*/
#include "Tests.h"

using namespace std;

Tests::Tests()
{

}

void Tests::runTests()
{
  testisEmpty();
  testSizeAddFrontOnce();
  testAddBackOnce();
  testMultAddFront();
  testMultAddBack();
  testAddRemoveFront();
  testAddRemoveBack();
  testSizeReducedOnce();
  testNotExisting();
  testEmptyListRemoveBack();
  testEmptyListRemoveFront();
  testAddFront();
  testAddBack();
  testIsEmptyNotEmpty();
  testRemoveFrontSize();
  testRemoveBackSize();
  testIsAddBackAddingToFront();
}
void Tests::testisEmpty()
{
  LinkedListOfInts testList;
  cout<<"Test 1: size of empty list is zero: ";
  if(testList.isEmpty()==true)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testSizeAddFrontOnce()
{
  LinkedListOfInts testList;
  cout<<"Test 2: size returns correct value after 1 addFront: ";
  testList.addFront(1);
  if(testList.size()==1)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testAddBackOnce()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  cout<<"Test 3: size returns correct value after 1 addBack: ";
  if(testList.size()==1)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testMultAddFront()
{
  LinkedListOfInts testList;
  cout<<"Test 4: size returns correct value after multiple addFront: ";
  for(int i=1; i<5; i++)
  {
    testList.addFront(i);
  }
  if(testList.size()==4)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testMultAddBack()
{
  LinkedListOfInts testList;
  cout<<"Test 5: size returns correct value after multiple addBack: ";
  for(int i=1; i<5; i++)
  {
    testList.addBack(i);
  }
  if(testList.size()==4)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testAddRemoveFront()
{
  LinkedListOfInts testList;
  cout<<"Test 6: size returns correct value after adds and removeFront: ";
  testList.addFront(1);
  testList.removeFront();
  if(testList.size()==0)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testAddRemoveBack()
{
  LinkedListOfInts testList;
  cout<<"Test 7: size returns correct value after adds and removeBack: ";
  testList.addBack(1);
  testList.removeBack();
  if(testList.size()==0)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Tests::testSizeReducedOnce()
{
  LinkedListOfInts testList;
  cout<<"Test 8: size reduced by 1 removeFront on populated list: ";
  testList.addFront(1);
  testList.addFront(2);
  testList.removeFront();
  if(testList.size()==1)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testNotExisting()
{
  LinkedListOfInts testList;
  cout<<"Test 9: returns false after searching for int not in list: ";
  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  if(testList.search(4))
  {
    cout<<"FAILED\n";
  }
  else
  {
    cout<<"PASSED\n";
  }
}
void Tests::testEmptyListRemoveBack()
{
  LinkedListOfInts testList;
  cout<<"Test 10: returns false when removeBack is called on empty list: ";
  if(!(testList.removeBack()))
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testEmptyListRemoveFront()
{
  LinkedListOfInts testList;
  cout<<"Test 11: returns false when removeFront is called on empty list: ";
  if(!(testList.removeFront()))
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testAddFront()
{
  LinkedListOfInts testList;
  cout<<"Test 12: Node is successfully added to the front of the list: ";
  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  if(testList.toVector().front() == 3)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testAddBack()
{
  LinkedListOfInts testList;
  cout<<"Test 13: Node is successfully added to the back of the list: ";
  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  if(testList.toVector().back() == 3)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testIsEmptyNotEmpty()
{
  LinkedListOfInts testList;
  cout<<"Test 14: isEmpty returns false on non-empty list: ";
  testList.addFront(1);
  if(testList.isEmpty())
  {
    cout<<"FAILED\n";
  }
  else
  {
    cout<<"PASSED\n";
  }
}
void Tests::testRemoveFrontSize()
{
  LinkedListOfInts testList;
  cout<<"Test 15: returns correct size after one removeFront on multiple node list: ";
  for(int i = 1; i<11; i++)
  {
    testList.addFront(i);
  }
  testList.removeFront();
  if(testList.size() == 9)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testRemoveBackSize()
{
  LinkedListOfInts testList;
  cout<<"Test 16: returns correct size after one removeFront on multiple node list: ";
  for(int i = 1; i<11; i++)
  {
    testList.addFront(i);
  }
  testList.removeBack();
  if(testList.size() == 9)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
void Tests::testIsAddBackAddingToFront()
{
  LinkedListOfInts testList;
  cout<<"Test 17: Nodes are being added to the front of the list using addBack: ";
  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  if(testList.toVector().front() == 3)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}
