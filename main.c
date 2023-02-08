//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node *head ;
    typedef struct node Node;
    typedef Node* NodePtr;

    NodePtr p= (NodePtr) malloc (sizeof(Node));
    //struct node *p= (struct node*) malloc (sizeof(struct node));
    head=p;
    p->value = c;
    int i,n=4;
    for(i=0;i<n;i++){
      p->next= (NodePtr) malloc (sizeof(Node));//จองที่
      p=p->next;//ขยับpให้ชี้ถัดไปเรื่อยๆ
      p->value=c+i+1;//ใส่ค่า จบลูปพีค้างอันสุดท้าย
      p->next=NULL;//ใส่ไปก่อนเพื่อความปลอกภัยของpointer
    /*
    p->next=(NodePtr) malloc (sizeof(Node));
    p->next->value=head->value+3;

    p->next->next=(NodePtr) malloc (sizeof(Node));
    p->next->next->value=11;
    p->next->next->next=NULL;
    */
      }
    // p=a p->next=b p->next->next=d
   /* printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    
  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
    /*printf("%d\n",d.value);
    printf("%d\n",b.next->value);
    printf("%d\n",a.next->next->value);\
    
    printf("%d\n", head ->next->next->value ); 
 Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
       

    struct node z;
    head=&z;
    z.value = 2;
    z.next=&a;

    printf("%d->",head -> value);
    printf("%d->",head -> next->value);
    printf("%d->",head -> next->next->value);    
    printf("%d->NULL",head -> next->next->next->value);  
    
    Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
       for(i=0;i<n;i++){
            printf("%3d ->", tmp->value);
            tmp=tmp->next;
          }
    printf("NULL\n");
  
     /*Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
        tmp=head;//ที่ลูปฟอมันจับไปแล้วต้องเซตใหม่
        while(tmp!=NULL){
            printf("%3d ->", tmp->value);
            tmp=tmp->next;
        }
     printf("NULL\n");
   
  
   /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    tmp=head;
    while(tmp!=NULL){
      printf("deleting %d \n",tmp->value);
      head=head->next;
      free(tmp);//อย่าใช้ตัวแปลนี้แล้วหลังfree
      tmp=head;
    }
    return 0;
}
