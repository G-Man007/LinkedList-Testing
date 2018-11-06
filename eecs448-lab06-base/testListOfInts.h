
/**
*       @file testListOfInts.h
*       @author Grant Stewart
*       @date 10-30-18
*       @brief A header file to test the List of Ints linked list, LinkedListofInts.h
*/
#ifndef TEST_LIST_OF_INTS_H
#define TEST_LIST_OF_INTS_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class testListOfInts{
public:
  /*
  *   @pre none
  *   @post an empty list is created
  */
  testListOfInts();

  /*
  *   @pre evoked near the end of program
  *   @post deconstructor for the testListOfInts
  */
  ~testListOfInts();

  /*
  *   @pre called when a list is to be tested
  *   @post runs the 17 list tests
  */
  void testList();

private:
  /*
  *   @pre method from class testListOfInts
  *   @post tests if isEmpty returns true when empty
  *   @return bool of the evaluated function
  */
  bool test1_isEmptyTrue();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if isEmpty returns false when populated
  *   @return bool of the evaluated function
  */
  bool test2_isEmptyFalse();

  /*
  *   @pre method from class testListOfInts
  *   @post tests size at length 0
  *   @return bool of the evaluated function
  */
  bool test3_zeroSize();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if addFront correctly adds to the front
  *   @return bool of the evaluated function
  */
  bool test4_addFront();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if addBack adds correctly to the back
  *   @return bool of the evaluated function
  */
  bool test5_addBack();

  /*
  *   @pre method from class testListOfInts
  *   @post tests size after three addFront calls
  *   @return bool of the evaluated function
  */
  bool test6_threeSize();

  /*
  *   @pre method from class testListOfInts
  *   @post tests search returns false when given false value
  *   @return bool of the evaluated function
  */
  bool test7_searchFalse();


  /*
  *   @pre method from class testListOfInts
  *   @post tests search to find value of known node
  *   @return bool of the evaluated function
  */
  bool test8_searchTrue();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if removeFront removes front node
  *   @return bool of the evaluated function
  */
  bool test9_removeFront();


  /*
  *   @pre method from class testListOfInts
  *   @post tests if removeBack removes the back node
  *   @return bool of the evaluated function
  */
  bool test10_removeBack();

  /*
  *   @pre method from class testListOfInts
  *   @post tests is removeFront removes anything from list
  *   @return bool of the evaluated function
  */
  bool test11_removeFront();


  /*
  *   @pre method from class testListOfInts
  *   @post tests if removeBack removes anything from list
  *   @return bool of the evaluated function
  */
  bool test12_removeBack();

  /*
  *   @pre method from class testListOfInts
  *   @post tests addBack adds a node to the list
  *   @return bool of the evaluated function
  */
  bool test13_addBack();

  /*
  *   @pre method from class testListOfInts
  *   @post tests addFront and addBack by placing pre set first
  *         and last values in the list and checking if 10 and 100
  *         are in the correct spot
  *   @return bool of the evaluated function
  */
  bool test14_firstLast();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if list is in correct order after five addBacks calls
  *   @return bool of the evaluated function
  */
  bool test15_fiveAddBack();

  /*
  *   @pre method from class testListOfInts
  *   @post tests search can find certain elements
  *   @return bool of the evaluated function
  */
  bool test16_searching();

  /*
  *   @pre method from class testListOfInts
  *   @post tests if search works with duplicates in the list
  *   @return bool of the evaluated function
  */
  bool test17_searchDuplicate();

};

#endif
