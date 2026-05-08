#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    char name[10]; //임의로 설정.
    int score;
    struct Student* next;
};

struct Student* head = NULL;

void add(char* name, int score){

    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));

    strcpy(newNode->name, name);
    newNode->score = score;
    newNode->next = NULL;

    if (head == NULL){
        head = newNode;
        return;
    }

    struct Student* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = newNode; 
}

void delete(char* name){

    struct Student* p = head;
    struct Student* prev = NULL;

    if (strcmp(head->name,name)==0){
        head = head->next;
        free(p);
        return;
    }

    while (strcmp(p->name,name)!=0){
        prev = p;
        p = p->next;
    }

    prev -> next = p->next;
    free(p);
} 

void print() {
    struct Student* p = head;
    while (p!=NULL){
        printf("%s %d\n",p->name,p->score);
        p=p->next;
    }
}
    

int main() {

    while (true){

        char cmd[6], name[10];
        int score;
        scanf("%s",cmd);
        
        if(strcmp(cmd,"add")==0){
            scanf("%s %d", name, &score);
            add(name, score);
        }
        else if (strcmp(cmd,"delete")==0){
            scanf("%s",name);
            delete(name);
        }
        else if (strcmp(cmd,"print")==0){
            print();
        }
        else if (strcmp(cmd,"quit")==0){
            struct Student* p = head;
            while (p!=NULL) {
                struct Student* temp = p;
                p = p->next;
                free(temp);
            }
            break;
        }
    }
}