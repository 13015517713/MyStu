#include "Enter.h"
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
User::User(string a, string b) {
	this->username = a;
	this->password = b;
	this->state=Check();  //��ʼ����� �Ϳ�����ɵ�¼
}
bool User::Check() { //�Ƚ��ļ��е�����  fopen����
	cout << "ƥ���� ......" << endl;
	Sleep(1000); //��msΪ��λ
	//const string filename = "C:\\Users\\Ų����ɭ��\\Desktop\\tes.txt";
	const string filename = "��¼��Ϣ.txt";
	ifstream f(filename);
	//������getline�Ļ���ȥ��д getline(cin,string)->getline(file,string);
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
