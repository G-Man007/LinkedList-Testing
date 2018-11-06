
/**
*       @file Test_ListOfInts.cpp
*       @author Grant Stewart
*       @date 10-30-18
*       @brief Implementation of Test_ListOfInts.h
*/
#include "testListOfInts.h"
using namespace std;

testListOfInts::testListOfInts()
{

}

void testListOfInts::testList()
{
  cout<< "Test 1: isEmpty returns true when empty: " << (test1_isEmptyTrue() ? "Passed\n" : "Failed\n");
  cout<< "Test 2: isEmpty returns false when populated: " << (test2_isEmptyFalse() ? "Passed\n" : "Failed\n");
  cout<< "Test 3: size at length 0: " << (test3_zeroSize() ? "Passed\n" : "Failed\n");
  cout<< "Test 4: addFront adds correctly to front: " << (test4_addFront() ? "Passed\n" : "Failed\n");
  cout<< "Test 5: addBack adds correctly to back: " << (test5_addBack() ? "Passed\n" : "Failed\n");
  cout<< "Test 6: size after three addFront calls: " << (test6_threeSize() ? "Passed\n" : "Failed\n");
  cout<< "Test 7: search returns false when given false value: " << (test7_searchFalse() ? "Passed\n" : "Failed\n");
  cout<< "Test 8: search finds value of known node: " << (test8_searchTrue() ? "Passed\n" : "Failed\n");
  cout<< "Test 9: removeFront removes front node: " << (test9_removeFront() ? "Passed\n" : "Failed\n");
  cout<< "Test 10: removeBack removes back node: " << (test10_removeBack() ? "Passed\n" : "Failed\n");
  cout<< "Test 11: removeFront removes from the list: " << (test11_removeFront() ? "Passed\n" : "Failed\n");
  cout<< "Test 12: removeBack removes from the list: " << (test12_removeBack() ? "Passed\n" : "Failed\n");
  cout<< "Test 13: addBack adds to the list: " << (test13_addBack() ? "Passed\n" : "Failed\n");
  cout<< "Test 14: head and tail are 10 and 100 after several adds: " << (test14_firstLast() ? "Passed\n" : "Failed\n");
  cout<< "Test 15: after five addBacks values are in expected order: "<< (test15_fiveAddBack() ? "Passed\n" : "Failed\n");
  cout<< "Test 16: search finds values in size 10 list: " << (test16_searching() ? "Passed\n" : "Failed\n");
  cout<< "Test 17: searching when duplicates are present: " << (test17_searchDuplicate() ? "Passed\n" : "Failed\n");
}

bool testListOfInts::test1_isEmptyTrue()
{
  LinkedListOfInts tester;

  if(tester.isEmpty() == 1 && tester.size() == 0)
  {
    return true;
  }

  return false;
}

bool testListOfInts::test2_isEmptyFalse()
{
  LinkedListOfInts tester;

  tester.addFront(1);

  if(tester.isEmpty()==true)
  {
    return false;
  }

  return true;
}


bool testListOfInts::test3_zeroSize()
{
  LinkedListOfInts tester;

  if(tester.size() == 0)
  {
    return true;
  }

  return false;
}


bool testListOfInts::test4_addFront()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  return(tester.toVector().at(0) == 3 && tester.toVector().at(1) == 2 && tester.toVector().at(2) == 1 );
}

bool testListOfInts::test5_addBack()
{
  LinkedListOfInts tester;
  tester.addBack(1);
  tester.addBack(2);
  tester.addBack(3);
  return(tester.toVector().at(0) == 1 && tester.toVector().at(1) == 2 && tester.toVector().at(2) == 3 );
}

bool testListOfInts::test6_threeSize()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);

  if(tester.size() == 3)
  {
    return true;
  }

  return false;
}

bool testListOfInts::test7_searchFalse()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);

  if(tester.search(4) == 0)
  {
    return true;
  }

  return false;
}

bool testListOfInts::test8_searchTrue()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);

  if(tester.search(2) == 1)
  {
    return true;
  }

  return false;
}

bool testListOfInts::test9_removeFront()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  tester.removeFront();
  tester.addFront(6);

  return(!(tester.search(3) == 1));
}

bool testListOfInts::test10_removeBack()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  tester.removeBack();

  return(!(tester.search(1) == 1));
}


bool testListOfInts::test11_removeFront()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  tester.removeFront();
  tester.removeFront();
  tester.addFront(6);

  return(tester.size() == 2);
}

bool testListOfInts::test12_removeBack()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  tester.removeBack();
  tester.removeBack();
  tester.addFront(4);

  return(tester.size() == 2);
}


bool testListOfInts::test13_addBack()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(3);
  tester.addBack(4);
  tester.addBack(5);

  return(tester.size() == 5);
}

bool testListOfInts::test14_firstLast()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(10);
  tester.addBack(4);
  tester.addBack(100);

  return(tester.toVector().at(0) == 10 && tester.toVector().at(4) == 100);
}

bool testListOfInts::test15_fiveAddBack()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(10);
  tester.addBack(4);
  tester.addBack(100);

  return(tester.toVector().at(0) == 10 && tester.toVector().at(4) == 100);
}

bool testListOfInts::test16_searching()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(2);
  tester.addFront(10);
  tester.addFront(100);
  tester.addFront(66);
  tester.addFront(23);
  tester.addFront(7);
  tester.addFront(120);
  tester.addFront(880);
  tester.addFront(44);

  return(tester.search(100) && tester.search(1) && tester.search(66) && tester.search(44));
}

bool testListOfInts::test17_searchDuplicate()
{
  LinkedListOfInts tester;
  tester.addFront(1);
  tester.addFront(10);
  tester.addFront(10);
  tester.addFront(100);
  tester.addFront(100);

  return(tester.search(100) && tester.search(10));
}


testListOfInts::~testListOfInts()
{

}
