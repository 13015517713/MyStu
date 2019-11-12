/*
  定义学生成绩表单
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
	void StuInit(); //构造函数  打印默认的
	//构造函数完成功能：打印列表 然后输入操作
	void SortPrint(); //更新队列
	//排序函数  打印排序后列表然后可以退出到现在这个界面
	void Print();
	//打印数组
};
#endif
