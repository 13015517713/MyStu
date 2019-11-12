/*
	实现功能，打印学生成绩列表。   从文件中读入
*/
#include<bits/stdc++.h>
#include "StuList.h"
using namespace std;
Window::Window(){  //在这里定义界面  定义登录后的操作
	system("cls"); 
	//输出操作列表

	//对于每个操作进行执行  排序打印等。  然后再返回这个函数
	this->StuInit();
	this->Print();
}
void Window::StuInit() {   //读取文件中的信息   首先用文件形式实现  与数据库的互联主要在这里
	//读取文件  主要是存储在数组中
	const string filename = "学生信息.txt";
	ifstream f(filename);
	string hang;
	getline(f, hang); //读取表头
	while (getline(f, hang)) {  //更新数组
		Student now;
		string t = "";
		int cnt = 0;
		for (int i = 0; i < hang.size(); i++) {
			if (hang[i] == ' ') {
				cnt++;
				if (cnt == 1) {
					now.setname(t);
				}
				else if (cnt == 2) {
					int res = 0;
					for (auto i : t) {
						res = (res << 3) + (res << 1) + i - 48;
					}
					now.setchina(res);
				}
				else if (cnt == 3) {
					int res = 0;
					for (auto i : t) {
						res = (res << 3) + (res << 1) + i - 48;
					}
					now.setmath(res);
				}
				t = "";
				continue;
			}
			t += hang[i];
		}
		int res = 0;
		for (auto i : t) {
			res = (res << 3) + (res << 1) + i - 48;
		}
		now.setenglish(res);
		data.push_back(now);

	}
}
void Window::Print() { //打印数组内容涵盖
	cout << "学生姓名    " << "    语文      英语       数学" << endl;
	for (auto t : data) {
		Student now = t;
		now.print();
		cout << endl;
	}
	return;
}
void Window::SortPrint() {  //排完序之后继续输出  
	//sort(v.begin(), v.end(),cmp);

}