#include<iostream>
#include<stdlib.h>

using namespace std;

#define ERROR_CODE -99999
#define SUCCESS_CODE 99999

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode* head;
int length;

void initializeList() {
    head = NULL; //set to NULL
    length = 0;
}

int insertItemBegin(int item) {
    ListNode* newNode = new ListNode(item);
    if (head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
    length++;
    return SUCCESS_CODE;
}

ListNode* searchItem(int item) {
    ListNode* temp = head;
    while (temp != NULL) {
        if (temp->val == item) {
            return temp;
        }
        temp = temp->next; //move to next node
    }
    return NULL;
}

int GetItem(int position) {
    if (position < 0 || position >= length) return ERROR_CODE;
    ListNode* temp = head;

    int count = 0;
    while (count < position) {
        temp = temp->next;
        count++;
    }
    return temp->val;
}

void PrintALL() {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next; //move to next node
    }
    cout << endl;
}


int deleteFirstOccurrence(int item) {
    ListNode* temp = head, * prev;
    while (temp != NULL) {
        if (temp->val == item) break;
        prev = temp;
        temp = temp->next; //move to next node
    }
    if (temp == NULL) return ERROR_CODE; //item not found to delete
    if (temp == head) //delete first node
    {
        head = head->next;
        free(temp);
    }
    else {
        prev->next = temp->next;
        free(temp);
    }
    length--;
    return SUCCESS_CODE;
}

//Assignment
// Insert item at the last position of the list
int insertItemLast(int item) {
    ListNode* tmp = head;
    while (tmp->next) {
        tmp = tmp->next;
    }
    length++;
    ListNode* newNode = new ListNode(item);
    tmp->next = newNode;
    return SUCCESS_CODE;
}

// Insert item at the given position of the list
int insertItemAT(int position, int item) {
    ListNode* newNode = new ListNode(item);

    if (position > 0) {
        // insert at head
        if (position - 1 == 0) {
            newNode->next = head;
            head = newNode;
        }
        else {
            // insert at N position
            ListNode* currentNode = head;
            for (int i = 1; i < position - 1 && currentNode->next != NULL; i++) {
                currentNode = currentNode->next;
            }

            newNode->next = currentNode->next;
            currentNode->next = newNode;
        }
    }
    else {
        // insert at tail
        ListNode* currentNode = head;

        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
    length++;
    return SUCCESS_CODE;
}
// return the number of the occurrence of the given item
int NumOfItems(int item) {
    ListNode* tmp = head;
    int count = 0;
    while (tmp) {
        if (tmp->val == item) {
            count++;
        }
        tmp = tmp->next;
    }
    return count;
}
// delete the first item of the list
int deleteFirstItem() {
    if (head != NULL) {
        head = head->next;
    }
    return SUCCESS_CODE;
}
// delete the last item of the list
int deletelastItem() {
    ListNode* tmp = head;
    while (tmp->next && tmp->next->next) {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    return SUCCESS_CODE;
}

int main() {
    cout << "Enter I --> Insert item begin\n";
    cout << "Enter G --> Getting item\n";
    cout << "Enter S --> Search item\n";
    cout << "Enter D --> Delete first occurrence\n";
    cout << "Enter P --> Print list\n";
    cout << "Enter L --> Print length of the list\n";

    char inp1, chk;
    int inp2, s;
    initializeList();
    while (true) {
        cin >> inp1;

        switch (inp1) {
        case 'I':
            cin >> inp2;
            s = insertItemBegin(inp2);
            break;
        case 'G':
            cin >> inp2;
            s = GetItem(inp2);
            cout << s;
            break;
        case 'S':
            cin >> inp2;
            cout << "Address: " << searchItem(inp2) << endl;
            break;
        case 'D'://delete the item of first occurrence
            cin >> inp2;
            s = deleteFirstOccurrence(inp2);
            break;
        case 'P':
            PrintALL();
            break;
        case 'L':
            cout << "Length: \n" << length << endl;
            break;
        }
        if (s == false) break;
    }
    return 0;
}