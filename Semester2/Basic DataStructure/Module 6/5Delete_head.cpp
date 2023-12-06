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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return; // na dile infinite loop e jabe.
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << "*Insert at tail" << endl;
}
void insert_at_Position(Node *&head, int v, int pos)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << "*Inserted at position " << pos << endl;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "*Inserted at head" << endl;
}

void delete_from_position(Node *&head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "*Delete from position " << pos << endl;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    cout << "*Deleted head " << endl;
}

void print_linked_list(Node *head)
{
    cout << endl
         << "*Printing linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << endl
             << "Option 1: Insert at tail: " << endl;
        cout << "Option 2: print_linked_list: " << endl;
        cout << "Option 3: Insert at any Position: " << endl;
        cout << "Option 4: Insert at head: " << endl;
        cout << "Option 5: Delete from position : " << endl;
        cout << "Option 6: Delete  Head : " << endl;
        cout << "Option 7: terminate: " << endl
             << endl;
        cout << "Enter an option: " << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter a value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter value & position: " << endl;
            int v, pos;
            cin >> v >> pos;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
                insert_at_Position(head, v, pos);
        }
        else if (op == 4)
        {
            cout << "Enter a value: " << endl;
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter a position: " << endl;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}