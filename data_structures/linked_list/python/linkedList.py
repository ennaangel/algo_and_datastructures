class LinkedNode:
    """Node for a linked list"""
    def __init__(self, value, next = None):
        self.value = value
        self.next = next

class LinkedList:
    def __init__(self, head: LinkedNode = None):
        self.head = head

    def iter_seq(self):
        cur_node = self.head
        while cur_node != None:
            print(f'Value: {cur_node.value}')
            cur_node = cur_node.next

    def len(self):
        cur_node = self.head
        length = 0 
        while cur_node != None:
            cur_node = cur_node.next
            length += 1
        return length
    
    def get_at(self, n):
        cur_node = self.head
        i = 0 
        while i < n:
            cur_node = cur_node.next
            i += 1
        return cur_node
    
    def set_at(self, n, value):
        node = self.get_at(n)
        node.value = value

    def insert_first(self, value):
        cur_head = self.head
        self.head = LinkedNode(value = value, next = cur_head)

    def insert_at(self, n, value):
        if n == 0:
            self.insert_first(value)
            return
        node = self.get_at(n - 1)
        next = self.get_at(n)
        node.next = LinkedNode(value = value, next = next)

    def add(self, value):
        if self.head == None:
            self.head = LinkedNode(value = value)
            return
        cur_node = self.head
        while cur_node != None:
            node = cur_node
            cur_node = cur_node.next
        node.next = LinkedNode(value = value)

    def delete_first(self):
        self.head = self.get_at(n = 1)

    def delete_at(self, n):
        if n == 0:
            self.delete_first()
            return
        node = self.get_at(n - 1)
        node.next = self.get_at(n + 1)


class LinkedListConstructor:
    """Linked list contrsuctors"""
    def from_list(source_list: list):
        """Returns a linked list from a list"""
        source_list.reverse()
        next = None
        for value in source_list:
            LN = LinkedNode(value = value, next = next)
            next = LN
        LL = LinkedList(head = LN)
        return LL
