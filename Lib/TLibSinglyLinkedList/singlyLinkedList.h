//
// Created by Pharrell_WANG on 20/1/2018.
//

#ifndef SWORD_OF_OFFER_SINGLYLINKEDLIST_H
#define SWORD_OF_OFFER_SINGLYLINKEDLIST_H

#include <iostream>
struct node
{
  int data;
  node *next;
};

class singlyLinkedList
{
private:
  node *head, *tail;
public:
  singlyLinkedList(): head(nullptr), tail(nullptr){};
};


#endif //SWORD_OF_OFFER_SINGLYLINKEDLIST_H
