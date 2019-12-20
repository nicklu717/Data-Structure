#ifndef _BINARY_NODE_HPP_
#define _BINARY_NODE_HPP_

#include <cstddef>

template <class T>
class BinaryNode {

    public:
        T value;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode(int _value) {
            value = _value;
            left = NULL;
            right = NULL;
        }
};

#endif