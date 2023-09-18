from linkedList import LinkedList, LinkedNode, LinkedListConstructor

class LinkedListTest:
    def __init__(self):
        self.ln2 = LinkedNode(2, None)
        self.ln1 = LinkedNode('5', self.ln2)
        self.ln0 = LinkedNode(1, self.ln1)
        self.test_list_1 = LinkedList(head = self.ln0)


    def test_get_at(self):

        ln_at = self.test_list_1.get_at(n = 0)
        assert ln_at == self.ln0
        ln_at = self.test_list_1.get_at(n = 2)
        assert ln_at == self.ln2
        print('[INFO] test get_at past')

        return True

LinkedListTest().test_get_at()

ll = LinkedListConstructor.from_list([1,2,3,4])

ll.insert_at(2, 'new')
ll.insert_at(2, 'new_new')
ll.insert_at(6, 'new_new')
ll.add('added')

ll.iter_seq()