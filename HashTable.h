/*
 * HashTable.h
 *
 * COSC 160 Fall 2017
 * Project #5
 *
 * Due on: DEC 8, 2017
 * Author: Carl Kyrillos
 *
 *
 * In accordance with the class policies and Georgetown's
 * Honor Code, I certify that, with the exception of the
 * class resources and those items noted below, I have neither
 * given nor received any assistance on this project.
 *
 * References not otherwise commented within the program source code.
 * Note that you should not mention any help from the TAs, the professor,
 * or any code taken from the class textbooks.
 */
#ifndef PROJECT_5_HASHTABLE_H
#define PROJECT_5_HASHTABLE_H

// Entry Class -> which is a node for the linked list
// HashTable Class -> a bunch of entries and if collision than you make a pointer to a new node
// >> HashTable is just an array of hashtable
// each node has number of collisions an hastable inside of it

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class HashTable
{
    HashTable();
    ~HashTable();
};



#endif //PROJECT_5_HASHTABLE_H
