struct Node
//A Linked list node
{
    string value;
    Node* next;
};

class LinkedList{
    public:
        LinkedList(){
            head = nullprt;
            tail = nullptr;
            };
        void add_node(string value){
            node* temp = new Node;      //Store the pointer to the new node in temp
            temp->value = value;        //Assign the value to the value stored at temp
            temp->next = nullptr;       //Add the next pointer to null

            if (head == nullptr)        //If it is the first node, assign it as head and tail
                {
                    head = temp;
                    tail = temp;
                }
            else                        //Else point the tail.next to temp, and assign temp only as tail,
                {   
                    tail->next = temp;
                    tail = temp;
                }

            }

    private:
        Node* head;
        Node* tail;
    };

