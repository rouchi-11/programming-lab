#to add at beginning
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
       
        
N1=Node(1)
N2=Node(2)
N3=Node(3)   
N4=Node(4) 

N1.next=N2
N2.next=N3
N4.next=N4

while current is not None:
    print(current.data,end="-")
    current=current.next