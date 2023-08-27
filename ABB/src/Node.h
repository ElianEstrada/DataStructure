//
// Created by elian_estrada on 21/08/23.
//

#ifndef ABB_NODE_H
#define ABB_NODE_H

template <typename T>

class Node {
private:
    T data;
    Node<T> *left;
    Node<T> *right;

public:
    // Constructors of Node
    /* Default  -- get default value of "T"
                -- both links are null */

    Node();

    /* Explicit Value   -- get given value
     *                  -- both links are null */
    Node(T data);

    // Getters and Setters
    T getData();
    void setData(T data);
    Node<T> *getLeft();
    void setLeft(Node<T> *left);
    Node<T> *getRight();
    void setRight(Node<T> *right);
};

#endif //ABB_NODE_H
