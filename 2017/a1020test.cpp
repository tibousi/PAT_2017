#include<cstdio>  
#include<vector>  
#include<queue>  
using namespace std;  
  
struct TreeNode  
{  
    int data;  
    TreeNode *lchild, *rchild;  
};  
TreeNode* createTreeByPostAndIn(int* P,int postS, int postE, int* I,int inS, int inE)  
{  
    if (postS > postE || inS > inE) return NULL;  
    int rootindex;  
    for (int k = inE; k >= inS; k--)  
    {  
        if (I[k] == P[postE])  
        {  
            rootindex = k;  
            break;  
        }  
    }  
    int numLeft = rootindex-inS;//??????????  
    TreeNode* root = new TreeNode;  
    root->data = P[postE];  
    root->lchild = createTreeByPostAndIn(P, postS, postS + numLeft - 1, I, inS, inS + numLeft - 1);  
    root->rchild = createTreeByPostAndIn(P, postS+numLeft,postE-1, I, rootindex+1, inE);//?????????????  
    return root;  
}  
void levelorder(TreeNode*root)  
{  
    queue<TreeNode*> Q;  
    if (root)  
    {  
        Q.push(root);  
    }  
    bool flag = false;  
    while (!Q.empty())  
    {  
        TreeNode* tn = Q.front();  
        if (!flag)  
        {  
            printf("%d", tn->data);  
            flag = true;  
        }  
        else  
            printf(" %d", tn->data);  
        Q.pop();  
        if (tn->lchild) Q.push(tn->lchild);  
        if (tn->rchild) Q.push(tn->rchild);  
    }  
}  
int main()  
{  
    int N;  
    scanf("%d", &N);  
    int *postorder = new int[N];  
    int *inorder = new int[N];  
    int temp;  
    for (int i = 0; i < N; i++)  
    {  
        scanf("%d", &postorder[i]);  
    }  
    for (int i = 0; i < N; i++)  
    {  
        scanf("%d", &inorder[i]);  
    }  
    TreeNode*ROOT = createTreeByPostAndIn(postorder, 0, N - 1, inorder, 0, N - 1);  
    levelorder(ROOT);  
    return 0;  
}
