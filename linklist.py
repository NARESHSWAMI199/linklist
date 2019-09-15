
# Must be remember that we can use the a class in other class with make the first class's object

# this class only create the node
class node:
    def __init__ (self ,data):
        self.data = data
        self.next = None  # the next var call auto when we make any obj


class linklist :
    def __init__ (self):
        self.start = None  # the start will hold the address of the first node




 # we make for the add a new  node
    def insertlast(self , value):  
        Newnode= node(value)  # this is object of the node class
        if (self.start == None):
            self.start = Newnode # the address of first node we asign the start var
      
        else : 
            temp= self.start  #the address wich one hold the start wich we passing in temp var 
            while (temp.next != None):  
                temp = temp.next  # the address of temp passing in the next of the temp
            temp.next = Newnode # if we get the none the temp's next value or address the  we add a new node


 # for display all content
    def view(self): 
        if (self.start==None):
            print ("linked list don't have any node")
        else:
            temp = self.start
            while(temp!=None):  # if temp will don't be none  then while print next values
                print (f"the values are {temp.data} \n",end = ' ' )
                temp = temp.next # this will push the temp for next position


#del first node
    def delfirst(self):
        if(self.start==None):
            print ('the linked list is empty')
        else:
            self.start = self.start.next





# making objects for linklist class
obj = linklist()
obj.insertlast(10)
obj.insertlast(20)
obj.insertlast(40)
obj.insertlast(50)
obj.view()
obj.delfirst()
print ('--------->> this is a seprator <<------------')
obj.view()

