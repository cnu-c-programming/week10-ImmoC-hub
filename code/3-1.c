#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char* name; //임의로 설정.
    int score;
    struct Student* next;
};

struct Student* head = NULL;

void add(char* name, int score){
    struct Student* p = list[0];
    if (p == NULL){
        struct Student s;
        s.name = name;
        s.score = score;
        s.next = NULL;
        list[0] = s;
        return;
    }
    while(p.next!=NULL){
        p = p.next();
    }
    struct Student* s;
    s.name = name;
    s.score = score;
    s.next = NULL;
    p.next=s;
    list[count++] = s;
    return;
}

void delete(char* name){
    struct Student* p = list[0];
    if (p.name==name){
        list[0] = p.next();
    }
    while(p.next.name!=name){
        p=p.next;
    }
    p.next=p.next.next;
}

void print() {
    struct Student* p = list[0];
    printf("%s\n", p.name);
    while (p.next!=NULL){
        p=p.next;
        printf("%s\n",p.name);
    }
}
    

int main() {
    list = (struct Student*)malloc(5);
    count = 0;
    while (true){
        char cmd[6], name[10];
        int score;
        scanf("%s",cmd);
        if(strcmp(cmd,"add")==0){
            scanf("%s %d", name, &score);
            add(name, score);
        }
        else if (strcmp(cmd,"delete"==0)){
            scanf("%s",name);
            delete(name);
        }
        else if (strcmp(cmd,"print"==0)){
            print();
        }
        else if (strcmp(cmd,"quit")==0){
            struct Student* p = head;
            while (p!=NULL)
        }
    }
}