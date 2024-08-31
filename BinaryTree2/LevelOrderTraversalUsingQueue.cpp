#include <iostream>
#include <queue>
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
void levelOrderTraversal(TreeNode *head)
{
    queue<TreeNode *> q;
    q.push(head);
    while (q.size() > 0)
    {
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->Left)
            q.push(temp->Left);
        if (temp->Right)
            q.push(temp->Right);
    }
}
int main()
{
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
