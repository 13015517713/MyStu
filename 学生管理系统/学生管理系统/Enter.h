/*
	�����¼����
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
	bool Check(); //����Ƿ��ǽ���״̬
	bool Compare();
};
#endif