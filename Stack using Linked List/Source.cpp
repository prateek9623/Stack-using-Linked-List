#include "Stack.h"
#include<iostream>

using namespace std;
void main() {
	Stack s;
	Integer *i1 = new Integer(10);
	Integer *i2 = new Integer(20);
	s.push(i1);
	s.push(i2);
	if(!s.isEmpty())
	cout << s.peek()->getData();
	s.pop();
	cout << s.getSize();
	cout << s.peek()->getData();
	_getwch();
}