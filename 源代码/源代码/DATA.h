#pragma once
#ifndef DATA_H_
#define DATA_H_
#include<stdbool.h>
#include<stdio.h>
#define MAXNUM 16
#define MAXLINE 50



typedef struct login_in {
	int account_number;
	char password[MAXNUM];
	int student_number;
	int ID;
}LOG;


typedef struct student_information {
	int stdnum;
	char name[8];
	int year;
	char speciality[MAXLINE];
	char academy[MAXLINE];
	int class_;
}stu;


typedef struct staff {
	char name[8];
	int work_number;
	int ridgepole;
	char area[MAXLINE];
}sta;


typedef struct dormitory {
	int ridgepole;
	char area[MAXLINE];
	int dornum;
	int floor;
	char name[MAXLINE];
	int bed_num;
	int count;
}dor;

typedef struct information {
	bool visable;
	char* content;
	char create_time[MAXLINE];
	char update_time[MAXLINE];

}info;

typedef struct registration {
	int name;
	int number;
	bool person_;
	char luggage_[MAXLINE];
}reg;

typedef struct node {

	struct node* next;
}Node;
typedef Node* List;



//��Ϣд���ļ�
bool filewrite(List* plist);


//��ʼ������
void Initlist(List* plist);

//ȷ�������Ƿ�Ϊ�գ������򷵻��棬���򷵻ؼ�
bool Listisempty(const List* plist);

//ȷ�����е�������������
unsigned int Listitemcount(const List* plist);

//�����
bool Additem(Item item, List* plist);
//��������ͨ�����ڲ�����
void Traverse(const List* plist, void(*pfun)(Node item));

//�ͷ��ڴ�
void empty(List* plist);

//���ļ��ж�ȡ���ݵ�����
bool fileread(List* plist);
//�޸�����
void copytonode(Item item, Node* plist);
//�ַ�������
char* s_gets(char* st, int n);






#endif
