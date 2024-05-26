#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<string>
using namespace std;
class professor{
private:
	string name;
	int salary;
public:
	professor();
	professor(string n, int s); 
	void set(string n, int s);
	void display2();
};
class department{
private:
	string name1;
	int numm;
	professor *o;
public:
	department();
	department(string n);
	void add(professor t);
	void naam(string n);
	void dis();
	void display1();
	void display();
};
class uni{
private:
	department *d;
	string name;
	int num3 = 0;
	int numm = 0;
public:
	uni();
	void set(string n, department *ob);
	void naam(string n);
	void display(int n1, int n2);
	void dis();
	void Disud();
	void add(department t);
	void add2(professor t, int n);
};
#endif