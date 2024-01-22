// #include<iostream>
// using namespace std;
// class tree{
//     public:
//     int data;
//     tree* left;
//     tree* right;

//     tree(int d){
//         this->data=d;
//         this->left=nullptr;
//         this->right=nullptr;
    
//     }
// };
// int main(){
//     tree* root=new tree(10);
//     root->left=new tree(20);
//     root->right=new tree(30);
// }


// #include<iostream>
// using namespace std;
// class node{
//    public:
//       int data;
//       node*next;
//       node(int d){
//          data=d;
//          node*next=NULL;
//       }
// };
// void insertAtFirstNode(node*&head, int data){
//    node*n= new node(data);
//    n->next= head;
//    head=n;
// }
// void print(node*head){
//    while(head!=NULL){
//       cout<<head->data<<"->";
//       head=head->next;
//    }
//    cout<<endl;
// }
// void deleteAtFirst(node*&head){
//    if(head==NULL){
//       return;
//    }
//    node*temp=head;
//    head= head->next;
//    temp->next =NULL;
// //    delete temp;
//    return;
// }
// int main(){
//    node*head= NULL;
//    insertAtFirstNode(head,1);
//    insertAtFirstNode(head,2);
//    insertAtFirstNode(head,3);
//    insertAtFirstNode(head,4);
//    deleteAtFirst(head);
//    print(head);
// }


#include<iostream>
#include<stack>

using namespace std;
int main(){
    int a;
    stack <int> s;
    cin>>a;
    int r;
    while(a!=0){
        r=a%2;
        s.push(r);
        a=a/2;
    }
    cout<<"Binary representation: ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}