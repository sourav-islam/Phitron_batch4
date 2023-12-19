#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int ctn = 0;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    return ctn;
}
void same_or_not(Node *head, Node *head1)
{
    if (size(head) != size(head1))
    {
        cout << "NO";
    }
    else
    {
        Node *i = head;
        Node *j = head1;
        int flag = 1;
        while (i != NULL)
        {
            if (i->val != j->val)
            {
                flag = 0;
            }
            i = i->next;
            j = j->next;
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_list(head, tail, val);
    }
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_list(head1, tail1, v);
    }

    same_or_not(head, head1);
    // print(head);
    // print(head1);
    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int ctn = 0;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    return ctn;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    list<int> list1;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list1.push_back(val);
    }
    list<int> list2;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        list2.push_back(v);
    }

     for (int val : list1)
         cout << val << " ";
     cout << endl;
     for (int v : list2)
         cout << v << " ";
    return 0;
} */