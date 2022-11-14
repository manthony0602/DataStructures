#include <cstdlib>
#include "AVLTree.h"

AVLTreeADT::AVLTreeADT()
{
    root = NULL;
}

AVLTreeADT::~AVLTreeADT()
// Calls recursive function Destroy to destroy the tree.
{
    Destroy(root);
}

void AVLTreeADT::Destroy(TreeNode*& tree)  // Recursive helper function
// Post: tree is empty; nodes have been deallocated.
{
    if (tree != NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
    }
}

int AVLTreeADT::Height(TreeNode* T)
// Returns the height of a tree T.
{
    if (T == NULL)
        return 0;
    else {
        int heightLeft = Height(T->left);
        int heightRight = Height(T->right);
        if (heightLeft > heightRight)
            return heightLeft + 1;
        else
            return heightRight + 1;
    }
}

int AVLTreeADT::Difference(TreeNode* T)
// Returns the difference between the heights of the left and right subtree T.
// Assumes the given TreeNode* T is not null.
{
    return Height(T->left) - Height(T->right);
}


void AVLTreeADT::Insert(TreeNode*& tree, ItemType item)
// Inserts item into tree.
// Post:  item is in tree; search property is maintained.
{
    if (tree == NULL)
    {// Insertion place found.
        tree = new TreeNode;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if (item < tree->info) {
        Insert(tree->left, item);    // Insert in left subtree.
        tree->left = Balance(tree->left);
    }
    else {
        Insert(tree->right, item);   // Insert in right subtree.
        tree->right = Balance(tree->right);
    }
}

void AVLTreeADT::PutItem(ItemType item)
// Calls recursive function Insert to insert item into tree.
{
    Insert(root, item);
    root = Balance(root);
}

void AVLTreeADT::DeleteItem(ItemType item)
// Deletes the element whose key matches item's key.
{
    // Left as an exercise.
}