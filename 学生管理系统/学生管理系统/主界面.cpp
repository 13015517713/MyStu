/*
  主界面实现功能：
  一个友好的登录界面(假的，其实捞的很
*/
#include<bits/stdc++.h>
#include<windows.h>
//#define DEBUG
#include "StudentInformation.h"
#include "StuList.h"
#include "Enter.h"
using namespace std;
/*
	逻辑：输入一个账户密码 ，每次创建一个user对象，登录时进行比较，比较成功然后进入（new界面对象）。
	比较不成功重新输入,账号输入-1退出。   如果登录成功和退出都要退出循环。 然后可以一个全局变量记录登陆状态。
*/
int main() {
#ifdef DEBUG
	new StuPrint();
#endif // DEBUG
	int f=1;
	while (1&&f) {
		string username, password;
		cout << "用户名： " << " 密码： "<<endl;
		cin >> username >> password;
		User t(username, password);
		if (t.Compare()) { //登录成功
			cout << "登录成功,欢迎进入" << endl;
			Sleep(1000);
			new Window();
			f = 0;
		}
		else {
			cout << "密码错误" << endl;
			cout << "输入0退出  输入1继续输入" << endl;
			cin >> f;
		}
	}
	return 0;
}