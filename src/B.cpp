//
// Created by steve on 18-8-11.
//

#include <iostream>
#include <algorithm>

using namespace std;


class Node {
public:
    int data;
    Node *next;
    Node *pre;
};

class Queue {
public:
    Node *head;
    Node *tail;

    Queue() {
        head = 0;
        tail = 0;
    }

    void removeHead() {
        if (head == 0) {
            cout << -1 << endl;
            return;
        } else if (tail == head) {
            cout << tail->data << endl;
            tail = 0;
            head = 0;
            return;
        }
        cout << head->data << endl;
        Node *temp = head->next;
        temp->pre = 0;
        head = temp;
    }

    void removeTail() {
        if (tail == 0) {
            cout << -1 << endl;
            return;
        } else if (tail == head) {
            cout << tail->data << endl;
            tail = 0;
            head = 0;
            return;
        }
        cout << tail->data << endl;
        Node *temp = tail->pre;
        temp->next = 0;
        tail = temp;
    }

    void append(Queue &queue, int w) {
        if (queue.tail == 0) return;
        if (w == 0) {
            tail->next = queue.head;
            queue.head->pre = tail;
            tail = queue.tail;
        } else {
            tail->next = queue.tail;
            Node *node = queue.tail;
            Node *temp;
            Node *temp_pre = node->pre;
            while (true){
                temp = temp_pre;
                if(temp == 0) break;
                temp_pre = temp->pre;
                node->next = temp;
                temp->pre = node;
                node = temp;
            }
            queue.tail->pre = tail;
            tail = queue.head;
        }
        queue.head = 0;
        queue.tail = 0;
    }
};

void read(int &x) {
    char ch = getchar();
    x = 0;
    for (; ch < '0' || ch > '9'; ch = getchar());
    for (; ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
}

int main() {
    int N, Q;
    while (cin >> N >> Q && (N != EOF || Q != EOF)) {
        int operatorType;
        Queue queues[N];
        for (int i = 0; i < Q; ++i) {
            cin >> operatorType;
            int u, v, w, val;
            switch (operatorType) {
                case 1:
                    cin >> u >> w;
                    read(val);
                    if (w == 0) {
                        Node *head = new Node;
                        head->pre = 0;
                        head->next = 0;
                        head->data = val;
                        if (queues[u - 1].head == 0) {
                            queues[u - 1].head = head;
                            queues[u - 1].tail = head;
                        }else {
                            head->next = queues[u - 1].head;
                            queues[u - 1].head->pre = head;
                            queues[u - 1].head = head;
                        }
                    } else {
                        Node *tail = new Node;
                        tail->next = 0;
                        tail->pre = 0;
                        tail->data = val;
                        if (queues[u - 1].head == 0) {
                            queues[u - 1].head = tail;
                            queues[u - 1].tail = tail;
                        }else {
                            queues[u - 1].tail->next = tail;
                            tail->pre = queues[u - 1].tail;
                            queues[u - 1].tail = tail;
                        }
                    }
                    break;
                case 2:
                    cin >> u >> w;
                    if (w == 0) {
                        queues[u - 1].removeHead();
                    } else {
                        queues[u - 1].removeTail();
                    }
                    break;
                case 3:
                    cin >> u >> v >> w;
                    queues[u - 1].append(queues[v - 1], w);
                    break;
            }
        }
    }
    return 0;
}

