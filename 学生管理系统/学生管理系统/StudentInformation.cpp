#include "StudentInformation.h"
#include<bits/stdc++.h>
using namespace std;
void Student::update(int x,int y,int z) {
	Math = x;
	China = y;
	English = z;
}
void Student::setname(string s){
	StuName = s;
}
void Student::setchina(int x) {
	China = x;
}
void Student::setmath(int x) {
	Math = x;
}
void Student::setenglish(int x) {
	English = x;
}
void Student::print() {
	cout << StuName << "         " << China << "            " << Math << "           " << English << endl;
}