#ifndef StudentInformation_H
#define StudentInformation_H
#include <bits/stdc++.h>
using namespace std;
class Student {
private:
	string StuName;
	int Math;
	int China;
	int English;
	//ÐÞ¸Ä³É¼¨
public:
	void setname(string x);
	void setmath(int x);
	void setchina(int x);
	void setenglish(int x);
	void update(int a, int b, int c);
	void print();
};
#endif