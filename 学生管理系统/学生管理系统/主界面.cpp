/*
  ������ʵ�ֹ��ܣ�
  һ���Ѻõĵ�¼����(�ٵģ���ʵ�̵ĺ�
*/
#include<bits/stdc++.h>
#include<windows.h>
//#define DEBUG
#include "StudentInformation.h"
#include "StuList.h"
#include "Enter.h"
using namespace std;
/*
	�߼�������һ���˻����� ��ÿ�δ���һ��user���󣬵�¼ʱ���бȽϣ��Ƚϳɹ�Ȼ����루new������󣩡�
	�Ƚϲ��ɹ���������,�˺�����-1�˳���   �����¼�ɹ����˳���Ҫ�˳�ѭ���� Ȼ�����һ��ȫ�ֱ�����¼��½״̬��
*/
int main() {
#ifdef DEBUG
	new StuPrint();
#endif // DEBUG
	int f=1;
	while (1&&f) {
		string username, password;
		cout << "�û����� " << " ���룺 "<<endl;
		cin >> username >> password;
		User t(username, password);
		if (t.Compare()) { //��¼�ɹ�
			cout << "��¼�ɹ�,��ӭ����" << endl;
			Sleep(1000);
			new Window();
			f = 0;
		}
		else {
			cout << "�������" << endl;
			cout << "����0�˳�  ����1��������" << endl;
			cin >> f;
		}
	}
	return 0;
}