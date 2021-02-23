class List
{
    public: struct Node
            {
                int data;
                Node * next;
            };
    private: Node *nw;
            //Create an unassigned node
            void createNode(int temp)
            {
                nw = new Node;
                nw -> next = nullptr;
                nw -> data = temp;
            }
    public: Node *start=nullptr; 
            //adds an unassigned node to the beginning of list
            void insertBeg(int data)
            {
                createNode(data);
                Node *temp = start;
                start = nw;
                nw->next = temp;
            }
            //adds an unassigned node to end of list
            void insertEnd(int data)
            {
                createNode(data);
                Node * temp = start;
                if(start == nullptr)
                {
                    start = nw;
                    return;
                }
                while(temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = nw;
            }
            //deletes a node at the end of the list and returns its data
            int deleteEnd()
            {
                int data;
                Node * temp = start;
                while((temp->next)->next != nullptr)
                {
                    temp = temp -> next;
                }
                data = (temp->next)->data;
                delete(temp->next);
                temp -> next = nullptr;
                return data;
            }
            //deletes a node at the beginning of a list and returns its data
            int deleteBeg()
            {
                int data;
                Node *temp = start;
                start = start -> next;
                data = temp->data;
                delete(temp);
                return data;
            }
            //returns the size of the list
            unsigned int size()
            {
                Node* temp = start;
                unsigned int count = 0;
                while(temp->next != nullptr)
                {
                    count++;
                    temp = temp->next;
                }
                count++;
                return count;
            }
};