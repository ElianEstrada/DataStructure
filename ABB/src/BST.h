//
// Created by elian_estrada on 21/08/23.
//

#ifndef ABB_BST_H
#define ABB_BST_H

#include "Node.h"
#include <iostream>

using namespace std;

template <typename T>

class BST {
public:
    BST(); // build empty BST
    bool isEmpty() const;
    Node<T> *getRoot();
    void setRoot(Node<T> root);
    void inOrden(ostream &out) const;
    bool search(const T &item) const;

private:
    Node<T> *root;
    void inOrderAux(ostream &out, Node<T> *root) const;
    bool searchAux(const T &item, Node<T> *root) const;
};

#endif //ABB_BST_H
