#ifndef BINARY_TREE_H
#define BINARY_TREE_H


class binary_tree
{
public:
    binary_tree();
    int a[50][2];
    //전위 순회
    void preorder (int N);
    //중위 순회
    void inorder (int N);
    //후위 순위
    void postorder (int N);
};

#endif // BINARY_TREE_H
