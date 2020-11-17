# include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linklist
{
    private:
        node *start, *end;
        
    public:      
        linklist()
        {
            start = NULL;
            end = NULL;
        }

    void addfirst (int value)
    {
        node *tmp = new node;
        tmp->data = value;
        tmp->next= NULL;


      if (start == NULL)
      {
          start = tmp;
          end = tmp;
      }
      else {
          end->next = tmp;
          end = end->next;
      }

    }


    node * gethead()
    {
        return start;
    }

    void  delfirst()
    {
        if (start == NULL)
        {
            cout<<"the linked list is empty"<<endl;
        }
        else {
            start = start->next;
        }
    }



    void display ()
    {
        if(start == NULL)
        {
            cout<<"the linked list is empty"<<endl;
        }
        else {
            node *tmp = start;
            while (tmp !=NULL )
            {
                cout<<"the data is "<<tmp->data<<endl;
                tmp = tmp->next;
                
            }
            
        }
    }

    
    // this is for delete last node in singly link list
    
        void pop(){
            if (start == NULL){
                cout<<"the link list is allready empty "<<endl;
            }
            else
            {
                struct node *tmp = start;
                struct node *tmp2 = start;


                while (tmp->next != NULL)
                {
                    tmp2 = tmp;
                    tmp = tmp->next;
                }
                tmp2->next = NULL;
                free(tmp);  // use for free memory loacation
                tmp = NULL;
            }
            
        }
    

    // static void  display (node *start)  // we take here start beacuse in this we use recursion
    // {
    //     if (start == NULL)
    //     {
    //         cout<<"Null"<<endl;
    //     }
    //     else 
    //     {
    //         cout << start->data <<endl;
    //         display(start->next);
    //     }
    // }

};

int main ()
{
    linklist a;
    a.addfirst(45);
     a.addfirst(65);
      a.addfirst(48);
    a.display();
    a.delfirst();
    a.display();
    return 0;
}
