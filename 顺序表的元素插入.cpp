#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;        //����ElemType������Ϊ�˷�������޸�Ԫ�����ͣ������̸���ʱֻ��Ҫ�޸�ElemType�����Ͷ��壬ʹ�����ͨ�úͷ����޸�

typedef struct {
	ElemType data[MAXSIZE];  //�����������������
	int length;              //ͳ��˳��������ݴ洢�ĸ���
}SeqList;

void InsertList(SeqList* L, int pos, ElemType e) {
	                                         //������һЩ�ж�������������ʱ����
	if (pos <= L->length) {                  //�Բ���λ�úϷ��Ե��ж�
		pos--;
		int end = L->length - 1;
		while (end >= pos) {
			L->data[end + 1] = L->data[end];
			end--;
		}
		L->data[pos] = e;
		L->length++;
	}
}