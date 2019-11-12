/*
	定义登录类型
*/
#pragma once
#ifndef ENTER_H
#define ENTER_H
#include<bits/stdc++.h>
using namespace std;
class User {
private:
	int state;
	string username;
	string password;
public:
	User(string a, string b);
	bool Check(); //检测是否是进入状态
	bool Compare();
};
#endif