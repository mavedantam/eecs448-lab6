/*
*	Tests.h
*	Menita Vedantam
*	Novemeber 7, 2017
* Tests class header file
*/

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "LinkedListOfInts.h"
#include <vector>

class Tests
  {
    public:
      Tests();
      void runTests();
      void testisEmpty();
      void testSizeAddFrontOnce();
      void testAddBackOnce();
      void testMultAddFront();
      void testMultAddBack();
      void testAddRemoveFront();
      void testAddRemoveBack();
      void testSizeReducedOnce();
      void testNotExisting();
      void testEmptyListRemoveBack();
      void testEmptyListRemoveFront();
      void testAddFront();
      void testAddBack();
      void testIsEmptyNotEmpty();
      void testRemoveFrontSize();
      void testRemoveBackSize();
      void testIsAddBackAddingToFront();

  };
  #endif
