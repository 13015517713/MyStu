#include "Enter.h"
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
User::User(string a, string b) {
	this->username = a;
	this->password = b;
	this->state=Check();  //初始化完毕 就可以完成登录
}
bool User::Check() { //比较文件中的数据  fopen读入
	cout << "匹配中 ......" << endl;
	Sleep(1000); //以ms为单位
	//const string filename = "C:\\Users\\挪威的森林\\Desktop\\tes.txt";
	const string filename = "登录信息.txt";
	ifstream f(filename);
	//运用了getline的机制去读写 getline(cin,string)->getline(file,string);
	string hang;
	getline(f, hang);
	while (getline(f, hang)) {
		string t("");
		int ads = 0;
		for (int i = 0; i < hang.size(); i++) {
			if (hang[i] == ' ') {
				if (t == username);
				else return false;
				t = "" ;
				for (int j = i + 1; j < hang.size(); j++) {  //
					t += hang[j];
				}
				if (t == password) return true;
				else return false;
			}
			t += hang[i];
		}
		
	}
	return false;
}
bool User::Compare() {
	return state;
}
