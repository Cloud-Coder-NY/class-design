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



//信息写入文件
bool filewrite(List* plist);


//初始化链表
void Initlist(List* plist);

//确定链表是否为空，若空则返回真，否则返回假
bool Listisempty(const List* plist);

//确定表中的项数：并返回
unsigned int Listitemcount(const List* plist);

//添加项
bool Additem(Item item, List* plist);
//遍历链表，通常用于查找项
void Traverse(const List* plist, void(*pfun)(Node item));

//释放内存
void empty(List* plist);

//从文件中读取数据到链表
bool fileread(List* plist);
//修改链表
void copytonode(Item item, Node* plist);
//字符串输入
char* s_gets(char* st, int n);






#endif
