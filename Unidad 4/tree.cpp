//Jonathan Velasquez | VP100717
#include <iostream>
#include <cstdint>

using namespace std;

struct node
{
  int key_value;
  node *left;
  node *right;
};

class btree
{
public:
  btree();
  ~btree();
  void insert(int key);
  node *search(int key);
  void destroy_tree();
  node *root_retriever();

private:
  void destroy_tree(node *leaf);
  void insert(int key, node *leaf);
  node *search(int key, node *leaf);
  node *root;
};

btree::btree()
{
  root = NULL;
}

btree::~btree()
{
  destroy_tree();
}

void btree::destroy_tree(node *leaf)
{
  if (leaf != NULL)
  {
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

void btree::insert(int key, node *leaf)
{
  if (key < leaf->key_value)
  {
    if (leaf->left != NULL)
      insert(key, leaf->left);
    else
    {
      leaf->left = new node;
      leaf->left->key_value = key;
      leaf->left->left = NULL;
      leaf->left->right = NULL;
    }
  }
  else if (key >= leaf->key_value)
  {
    if (leaf->right != NULL)
      insert(key, leaf->right);
    else
    {
      leaf->right = new node;
      leaf->right->key_value = key;
      leaf->right->left = NULL;
      leaf->right->right = NULL;
    }
  }
}

node *btree::search(int key, node *leaf)
{
  if (leaf != NULL)
  {
    if (key == leaf->key_value)
      return leaf;
    if (key < leaf->key_value)
      return search(key, leaf->left);
    else
      return search(key, leaf->right);
  }
  else
    return NULL;
}

void btree::insert(int key)
{
  if (root != NULL)
    insert(key, root);
  else
  {
    root = new node;
    root->key_value = key;
    root->left = NULL;
    root->right = NULL;
  }
}

node *btree::search(int key)
{
  return search(key, root);
}

void btree::destroy_tree()
{
  destroy_tree(root);
}

node *btree::root_retriever()
{
  return root;
}

void printSubtree(node *root, const string &prefix)
{
  if (root == NULL)
  {
    return;
  }

  bool hasLeft = (root->left != NULL);
  bool hasRight = (root->right != NULL);

  if (!hasLeft && !hasRight)
  {
    return;
  }

  cout << prefix;
  cout << ((hasLeft && hasRight) ? "├── " : "");
  cout << ((!hasLeft && hasRight) ? "└── " : "");

  if (hasRight)
  {
    bool printStrand = (hasLeft && hasRight && (root->right->right != NULL || root->right->left != NULL));
    string newPrefix = prefix + (printStrand ? "│   " : "    ");
    cout << root->right->key_value << endl;
    printSubtree(root->right, newPrefix);
  }

  if (hasLeft)
  {
    cout << (hasRight ? prefix : "") << "└── " << root->left->key_value << endl;
    printSubtree(root->left, prefix + "    ");
  }
}

void printTree(node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->key_value << endl;
  printSubtree(root, "");
  cout << endl;
}

int main()
{
  btree arbol;
  arbol.insert(40);
  arbol.insert(50);
  arbol.insert(40);
  arbol.insert(3);
  arbol.insert(5);
  printTree(arbol.root_retriever());
  return 0;
}