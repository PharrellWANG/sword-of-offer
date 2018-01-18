//
// Created by Pharrell_WANG on 19/1/2018.
//

#ifndef SWORD_OF_OFFER_TREENODE_H
#define SWORD_OF_OFFER_TREENODE_H

#include <iostream>
struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  // single argument constructors must be marked as
  // explicit to avoid implicit conversions
  explicit TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};
#endif //SWORD_OF_OFFER_TREENODE_H
