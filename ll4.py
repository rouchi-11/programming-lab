#to insert at end
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        


N1=Node(1)
N2=Node(2)
N3=Node(3)
    

N1.next=N2
N2.next=N3

Head=N1
current=Head
N4=Node(4)



while current.next is not None:
    current=current.next
current.next=N4
    
current=Head
while current is not None:
    print(current.data,end="-")
    current=current.next