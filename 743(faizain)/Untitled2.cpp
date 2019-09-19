#include <iostream>
#include"priorityNode.cpp"
using namespace std;
 
class Priority_Queue
{
    private:
        Node *front;
    public:
        Priority_Queue()
        {
            front = NULL;
        }
        void insert(int item, int priority)
        {
            Node *newNode=new Node();
            newNode->set(item);
            newNode->setpriority(priority);
            if (front == NULL || newNode->getpriority() < front->getpriority())
            {
                newNode->setNext(front);
                front = newNode;
            }
            else if(newNode->getpriority()==front->getpriority())
            {
            	newNode->setNext(front->getNext());
            	front->setNext(newNode);
			}
            else
            {
                Node* q = front;
                while (q->getNext()!= NULL && q->getNext()->getpriority()<newNode->getpriority())
                    q=q->getNext();
                newNode->setNext(q->getNext());
                q->setNext(newNode);
            }
        }
        /*
         * Delete from Priority Queue
         */
        void del()
        {
            Node *tmp=new Node();
            if(front == NULL)
                cout << "Queue Underflow\n";
            else
            {
                tmp = front;
                cout << "Deleted item is: " << tmp->get() << endl;
                front = front->getNext();
                free(tmp);
            }
        }
        /*
         * Print Priority Queue
         */
        void display()
        {
            Node *ptr;
            ptr = front;
            if (front == NULL)
                cout << "Queue is empty\n";
            else
            { cout << "Queue is :\n";
                cout << "Priority       Item\n";
                while(ptr != NULL)
                {
                    cout << ptr->getpriority() << "                 " << ptr->get() << endl;
                    ptr = ptr->getNext();
                }
            }
        }
};
/*
 * Main
 */
int main()
{
    int choice, item, priority;
    Priority_Queue pq; 
    do
    {
        cout << "1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Quit\n";
        cout << "Enter your choice : "; 
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Input the item value to be added in the queue : ";
            cin >> item;
            cout << "Enter its priority : ";
            cin >> priority;
            pq.insert(item, priority);
            break;
        case 2:
            pq.del();
            break;
        case 3:
            pq.display();
            break;
        case 4:
            break;
        default :
            cout << "Wrong choice\n";
        }
    }
    while(choice != 4);
    return 0;
}
