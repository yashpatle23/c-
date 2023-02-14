#include<iostream>
using namespace std;


class linklist{
    private:
    struct node{
        int data;
        node *link;
    } *p;
    public:
    linklist();
    void append(int num);    
    void display();
    void addatbeg(int num);
    void addafter(int loc,int num);
    void del(int num);
    int count();
};
linklist::linklist(){
    p=NULL;
}
void linklist::append(int num){
    node *temp,*r;
    if (p==NULL){
        temp=new node;
        temp->data=num;
        temp->link=NULL;
        p=temp;
    }
    else{
        temp=p;
        while(temp->link!=NULL) temp=temp->link;
        r =new node;
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
}
void linklist::display(){
    node *temp=p;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
int linklist::count(){
    int i=0;
    node *temp;
    while(temp!=NULL){
        i++;
        temp=temp->link;
    }
    return i;
}
void linklist::addatbeg(int num){
    node *temp,*r;
    if(p==NULL){
        temp=new node;
        temp->data=num;
        temp->link=NULL;
        p=temp;
    }
    else{
        r =new node;
        r->data=num;
        r->link=p;
        p=r;
    }
}
void linklist::del(int num){
    node *temp,*todelete;
    temp=p;
    while(temp->data!=num) {
        todelete=temp;
        
    }
}
int  main(){
    linklist l;
    l.append(7);
    l.append(67);
    l.append(56);
    cout<<"\n elsements in the lnked list";
    l.display();
    return 0;
                                                        
}