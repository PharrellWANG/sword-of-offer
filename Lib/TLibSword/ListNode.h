//
// Created by Pharrell_WANG on 19/1/2018.
//

#ifndef SWORD_OF_OFFER_LISTNODE_H
#define SWORD_OF_OFFER_LISTNODE_H

#include <iostream>

struct ListNode{
  int val;
  ListNode* next;

  explicit ListNode(int x): val(x), next(nullptr){}
};

#endif //SWORD_OF_OFFER_LISTNODE_H
