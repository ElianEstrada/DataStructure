//
// Created by elian_estrada on 21/08/23.
//

#include "BST.h"

using namespace std;

template <typename T>
BST<T>::BST() {
    root = nullptr;
}

template <typename T>
bool BST<T>::isEmpty() const {
    return root == nullptr;
}

template <typename T>
void BST<T>::inOrden(ostream &out) const {
    inOrderAux(out, root);
}

template <typename T>
void BST<T>::inOrderAux(ostream &out, Node<T> *root) const {
    if (root != nullptr) {
        inOrderAux(out, root->getLeft());
        out << root->getData() << " ";
        inOrderAux(out, root->getRight());
    }
}

template <typename T>
bool BST<T>::search(const T &item) const {
    searchAux(item, root);
}

template <typename T>
bool BST<T>::searchAux(const T &item, Node<T> *root) const {
    if (root == nullptr) {
        return false;
    }

    if (item < root->getData()){
        return searchAux(item, root->getLeft());
    }

    if (item > root->getData()) {
        return searchAux(item, root->getRight());
    }

    return true;
}

 // page 718

template <typename T>
Node<T> *BST<T>::getRoot() {
    return root;
}

template <typename T>
void BST<T>::setRoot(Node<T> root) {
    this->root = root;
}