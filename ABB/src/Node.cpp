//
// Created by elian_estrada on 21/08/23.
//

#include "Node.h"

template <typename T>
Node<T>::Node() {
    left = nullptr;
    right = nullptr;
}

template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    left = nullptr;
    right = nullptr;
}

template <typename T>
T Node<T>::getData() {
    return data;
}

template <typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

template <typename T>
Node<T> *Node<T>::getLeft() {
    return left;
}

template <typename T>
void Node<T>::setLeft(Node<T> *left) {
    this->left = left;
}

template <typename T>
Node<T> *Node<T>::getRight() {
    return right;
}

template <typename T>
void Node<T>::setRight(Node<T> *right) {
    this->right = right;
}