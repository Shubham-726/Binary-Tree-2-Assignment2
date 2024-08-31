#include <iostream>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *Left;
    TreeNode *Right;
    TreeNode(int val)
    {
        Left = NULL;
        this->val = val;
        Right = NULL;
    }
};
int Levels(TreeNode *head)
{
    if (head == NULL)
        return 0;
    // int leftlevel = Levels(head->Left);
    // int rightlevel = Levels(head->Right);
    // return 1 + max(leftlevel, rightlevel);
    return 1 + max(Levels(head->Left), Levels(head->Right));
}

void displayNthelementOfTree(TreeNode *head, int n, int level)
{
    if (head == NULL)
        return;
    if (n == level)
        cout << head->val << " ";                       // work
    displayNthelementOfTree(head->Right, n, level + 1); // call 2
    displayNthelementOfTree(head->Left, n, level + 1);  // call 1
}
void levelOrderTraversal(TreeNode *head)
{
    int n = Levels(head);
    for (int i = 1; i <= n; i++)
    {
        displayNthelementOfTree(head, i, 1);
        cout << endl;
    }
}
int main()
{
    int level = 1;
    int n = 3;
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    a->Left = b;
    a->Right = c;
    b->Left = d;
    b->Right = e;
    c->Left = f;
    c->Right = g;
    levelOrderTraversal(a);
}
