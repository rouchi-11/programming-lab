
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Method to add a node at any index
# Indexing starts from 0.
def insertAtIndex(self, data, index):
    if (index == 0):
        self.insertAtBegin(data)

    position = 0
    current_node = self.head
    while (current_node != None and position+1 != index):
        position = position+1
        current_node = current_node.next

    if current_node != None:
        new_node = Node(data)
        new_node.next = current_node.next
        current_node.next = new_node
    else:
        print("Index not present")
def inserAtEnd(self, data):
    new_node = Node(data)
    if self.head is None:
        self.head = new_node
        return

    current_node = self.head
    while(current_node.next):
        current_node = current_node.next

    current_node.next = new_node
# Update node of a linked list
# at given position
def updateNode(self, val, index):
    current_node = self.head
    position = 0
    if position == index:
        current_node.data = val
    else:
        while(current_node != None and position != index):
            position = position+1
            current_node = current_node.next

        if current_node != None:
            current_node.data = val
        else:
            print("Index not present")
