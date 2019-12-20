#ifndef _BINARY_NODE_HPP_
#define _BINARY_NODE_HPP_

#include <cstddef>

template <class T>
class BinaryNode {

    public:
        T key;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode(int _key) {
            key = _key;
            left = NULL;
            right = NULL;
        }
};

#endif