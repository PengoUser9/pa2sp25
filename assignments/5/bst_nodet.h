/*
 * Name        : bst_nodet.h
 * Author      : Luke Sathrum
 * Description : Binary Search Tree Node
 */

#ifndef SATHRUM_BST_NODET_H_
#define SATHRUM_BST_NODET_H_

#include <iostream>

template<typename T>
class BSTNodeT {
 public:
  /*
   * Constructs an empty node with a contents of the parameter.
   * @param T contents - The new contents of the node. Defaults to T().
   */
  BSTNodeT(T contents = T());

  /*
   * Destructor
   */
  ~BSTNodeT();

  /*
   * Mutator
   * Sets the node's contents to the given parameter.
   * @param T contents - The new contents of the node.
   */
  void SetContents(T contents);

   /*
   * Sets the node's left child to the given parameter.
   * @param BSTNodeT<T> *node - The new child node's memory address.
   */
  void SetLeft(BSTNodeT<T> *node);

  /*
   * Sets the node's right child to the given parameter.
   * @param BSTNodeT<T> *node - The new child node's memory address.
   */
  void SetRight(BSTNodeT<T> *node);

  /*
   * Increments the node count by 1.
   */
  void IncrementCount();

  /*
   * Decrements the node count by 1.
   */
  void DecrementCount();

  /*
   * Returns the contents of the node.
   * @return T - The contents of the node.
   */
  T GetContents() const;

  /*
   * Returns the contents of the node.
   * @return T& - The contents of the node (by reference).
   */
  T& GetContents();

  /*
   * Returns the memory address of the left child of the node.
   * @return BSTNodeT<T>* - The memory address of the node's left child.
   */
  BSTNodeT<T>* GetLeft() const;

  /*
   * Returns the memory address of the left child of the node.
   * @return BSTNodeT<T>*& - The memory address of the node's left child (by 
   *                         reference).
   */
  BSTNodeT<T>*& GetLeft();

  /*
   * Returns the memory address of the right child of the node.
   * @return BSTNodeT<T>* - The memory address of the node's right child.
   */
  BSTNodeT<T>* GetRight() const;

  /*
   * Returns the memory address of the right child of the node.
   * @return BSTNodeT<T>*& - The memory address of the node's right child (by 
   *                         reference).
   */
  BSTNodeT<T>*& GetRight();

  /*
   * Returns the node's count.
   * @return unsigned int - The current count of the node.
   */
  unsigned int GetCount() const;

 private:
  BSTNodeT<T> *left_child_;
  BSTNodeT<T> *right_child_;
  T contents_;
  unsigned int count_;
};

// Member Function Definitions

template<typename T>
BSTNodeT<T>::BSTNodeT(T contents) {
  left_child_ = NULL;
  right_child_ = NULL;
  contents_ = contents;
  count_ = 0;
}

template<typename T>
BSTNodeT<T>::~BSTNodeT() {
  left_child_ = right_child_ = NULL;
}

template<typename T>
void BSTNodeT<T>::SetContents(T contents) {
  contents_ = contents;
}

template<typename T>
void BSTNodeT<T>::SetLeft(BSTNodeT<T> *node) {
  left_child_ = node;
}

template<typename T>
void BSTNodeT<T>::SetRight(BSTNodeT<T> *node) {
  right_child_ = node;
}

template<typename T>
void BSTNodeT<T>::IncrementCount() {
  count_++;
}

template<typename T>
void BSTNodeT<T>::DecrementCount() {
  count_--;
}

template<typename T>
T BSTNodeT<T>::GetContents() const {
  return contents_;
}

template<typename T>
T& BSTNodeT<T>::GetContents() {
  return contents_;
}

template<typename T>
BSTNodeT<T>* BSTNodeT<T>::GetLeft() const {
  return left_child_;
}

template<typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetLeft() {
  return left_child_;
}

template<typename T>
BSTNodeT<T>* BSTNodeT<T>::GetRight() const {
  return right_child_;
}

template<typename T>
BSTNodeT<T>*& BSTNodeT<T>::GetRight() {
  return right_child_;
}

template<typename T>
unsigned int BSTNodeT<T>::GetCount() const {
  return count_;
}

#endif /* SATHRUM_BST_NODET_H_ */
