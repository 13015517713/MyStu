/*
	ʵ�ֹ��ܣ���ӡѧ���ɼ��б�   ���ļ��ж���
*/
#include<bits/stdc++.h>
#include "StuList.h"
using namespace std;
Window::Window(){  //�����ﶨ�����  �����¼��Ĳ���
	system("cls"); 
	//��������б�

	//����ÿ����������ִ��  �����ӡ�ȡ�  Ȼ���ٷ����������
	this->StuInit();
	this->Print();
}
void Window::StuInit() {   //��ȡ�ļ��е���Ϣ   �������ļ���ʽʵ��  �����ݿ�Ļ�����Ҫ������
	//��ȡ�ļ�  ��Ҫ�Ǵ洢��������
	const string filename = "ѧ����Ϣ.txt";
	ifstream f(filename);
	string hang;
	getline(f, hang); //��ȡ��ͷ
	while (getline(f, hang)) {  //��������
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
void Window::Print() { //��ӡ�������ݺ���
	cout << "ѧ������    " << "    ����      Ӣ��       ��ѧ" << endl;
	for (auto t : data) {
		Student now = t;
		now.print();
		cout << endl;
	}
	return;
}
void Window::SortPrint() {  //������֮��������  
	//sort(v.begin(), v.end(),cmp);

}