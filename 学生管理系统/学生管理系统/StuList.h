/*
  ����ѧ���ɼ���
*/
#pragma once
#ifndef STULIST_H
#define STULIST_H
#define MaxStu 10000
#include "StudentInformation.h"
class Window {
private:
	//Student data[MaxStu];
	vector<Student> data;
public:
	Window();
	void StuInit(); //���캯��  ��ӡĬ�ϵ�
	//���캯����ɹ��ܣ���ӡ�б� Ȼ���������
	void SortPrint(); //���¶���
	//������  ��ӡ������б�Ȼ������˳��������������
	void Print();
	//��ӡ����
};
#endif
