# Binary Trees
## Concepts
### Tree Data structure
A non-linear data structure, a collection of nodes that are linked together to represent or simulate an information hierarchy. Each node has references to sub-nodes referred to as child nodes. A tree structure is used to represent hierarchical data, each node can have 0 or more child nodes and exactly one parent node. The root node has no parent.

A tree can be defined as a recursive data struture having a root node and references to subtrees.

Links between nodes are node as **edges**, in a tree of n nodes, there are exactly n-1 edges, and each node with the exception of the root has exactly one incoming edges.

**Depth/level** of a node A is the length of the path from the root to that node, with each node along the path to the node contributing 1 to the path, this is the number of edges from the root node to the node of interest.

**Height** is the number of edges in the longest path from that node to a leaf. Height of any leaf node is zero and the height of the tree is the height of the root node. The height of the root node is 0, and the height of an empty tree is -1.

The **degree** of a node is the number of children of that node, and the degree of a tree is the maximum degree of a node in the tree

**Distance** is the number of edges along the shortest path between two nodes.

**Width**, the number of nodes at a given level

**Breadth** refers to the number of leaves, a leaf is a node with no children.

**Size** of a tree is the number of nodes in the tree

A **Binary Tree** is a tree ADT where each node has at most two children, and the left-most node is . Any node in a tree ADT that does not have a child is referred to as a leaf node. Given two node A and B, if we can traverse from node A to node B, then A is referred to as the ancestoor of B, and B is referred to as the descendant of A.

### Files
1. 0-binary_tree_node.c
> binary_tree_node - creates a binary tree node
2. 1-binary_tree_insert_left.c
> binary_tree_insert_left - inserts a node as the left-child of another node
3. 2-binary_tree_insert_right.c
> binary_tree_insert_right - inserts a node as the right-child of another node
4. 3-binary_tree_delete.c
> binary_tree_delete - deletes an entire binary tree
5. 4-binary_tree_is_leaf.c
> binary_tree_is_leaf - check if node is a leaf
6. 5-binary_tree_is_root.c
> binary_tree_is_root - checks if node is root
7. 6-binary_tree_preorder.c
> binary_tree_preorder - goes through a binary tree using pre-order traversal
8. 7-binary_tree_inorder.c
> binary_tree_inorder - go through a tree using in-order traversal
9. 8-binary_tree_postorder.c
> binary_tree_postorder - goes through a tree using post-order traversal
10. 9-binary_tree_height.c
> binary_tree_height - measures the height of a binary tree
11. 10-binary_tree_depth.c
> binary_tree_depth - measures the depth of a node in a binary tree
12. 11-binary_tree_size.c
> binary_tree_size - measures the size of a binary tree
13. 12-binary_tree_leaves.c
> binary_tree_leaves - counts the leaves in a binary tree
14. 13-binary_tree_nodes.c
> binary_tree_leaves - counts the leaves in a binary tree
15. 14-binary_tree_balance.c
> binary_tree_balance - measures the balance factor of a binary tree node
16. 15-binary_tree_is_full.c
> checks if every node in the tree has 0 or two children
17. 16-binary_tree_is_perfect.c
> checks if tree is a full binary tree with a balance factor of 0 on all nodes
18. 17-binary_tree_sibling.c
> finds the node sharing the same parent with the argument node, if it exists
19. 18-binary_tree_uncle.c
> finds the node's parent's sibling if it exists