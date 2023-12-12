/* #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void delete_node(Node *i, Node *&j)
{
    Node *k = i;
    //  if (k->next == j)
    //  {
    //      Node *deleteNode = j;
    //      k->next = j->next;
    //      j = k->next;
    //      delete deleteNode;
    //  }
    // else
    {
        while (k->next != j)
        {
            k = k->next;
        }

        Node *deleteNode = j;
        k->next = j->next;
        j = k->next;
        delete deleteNode;
    }
}
void remove_duplicate(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
                delete_node(i, j);
            }
        }
    }
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_list(head, val);
        }
    }
    remove_duplicate(head);
    print_list(head);
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_node(Node *i, Node *j)
{
    Node *deleteNode = j;
    i->next = j->next;
    delete j;
    j = i->next;
}

void remove_duplicate(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {
        Node *pre = i;
        for (Node *j = pre->next; j != NULL; j = pre->next)
        {

            if (i->val == j->val)
            {
                delete_node(pre, j);
            }
            else
            {
                pre = j;
            }
        }
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_list(head, val);
        }
    }
    remove_duplicate(head);
    print_list(head);
    return 0;
}
