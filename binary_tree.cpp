#include "binary_tree.h"
#include<iostream>
using namespace std;
binary_tree::binary_tree()
{

}

void binary_tree::preorder (int N)
{
    if (N == -1)
        return;
    cout << (char)(N+'A');
    preorder(a[N][0]);
    preorder(a[N][1]);
}
void binary_tree::inorder (int N)
{
    if (N == -1)
        return;
    inorder(a[N][0]);
    cout << (char)(N+'A');
    inorder(a[N][1]);
}
void binary_tree::postorder (int N)
{
    if (N == -1)
        return;
    postorder(a[N][0]);
    postorder(a[N][1]);
    cout << (char)(N+'A');
}
