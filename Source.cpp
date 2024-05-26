#include"Header.h"
professor::professor()
	{
		name = "";
		salary = 0;
	}

professor:: professor ( string n, int s){
		name = n;
		salary = s;

	}
void professor:: set(string n, int s){
		name = n;
		salary = s;
	}
void professor:: display2()
	{
		cout << "\nName = " << name << endl;
		cout << "\nSalary = " << salary << endl;
	}

department::department()
	{
		numm = 0;
		name1 = "";
	}
department::department(string n)
	{
		name1 = n;
	}
void department:: add(professor t)
	{
	//	cout << "\nADD FUNCTION CALLED FOR DEP CLASS\n";
		numm++;
		//	cout << "\nVLAUE OF NUMM = " << numm << endl;
		professor *temp;
		temp = new professor[numm];
		if (numm> 1)
		{
			for (int i = 0; i < numm - 1; i++)
			{
				temp[i] = o[i];
			}
		}
		temp[numm - 1] = t;
		o = temp;
	}
void department:: naam(string n)
	{
		name1 = n;
	}
void department:: dis()
	{
		cout << name1 << endl;
	}
void department:: display1()
	{
		cout << "\nName of Department = " << name1 << endl;
		for (int j = 0; j < numm; j++)
		{
			cout << "\nPROFESSOR " << j + 1 << endl;
			o[j].display2();
		}
	}
void department::display()
	{
		cout << "\nName of Department = " << name1 << endl;
	}
	uni::uni()
	{
		name = "";
	}
	void uni:: set(string n, department *ob)
	{
		name = n;
		d = ob;
	}
	void uni::naam(string n)
	{
		name = n;
	}
	void uni::display(int n1, int n2)
	{
		cout << "\nName of the uni = " << name << endl;
		for (int i = 0; i < num3; i++)
		{
			d[i].display1();
		}
	}
	void uni::dis()
	{
		cout << name << endl;
	}
	void uni::Disud()
	{
		for (int i = 0; i < num3; i++)
		{
			cout << i + 1 << " : ";
			d[i].display();
		}
	}

	void uni::add(department t)
	{
		//	cout << "\nADD FUNCTION CALLED FOR THE UNI CLASS!\n";
		num3++;
		//cout << "\nVLAUE OF NUM3 = " << num3 << endl;
		department *temp = nullptr;
		temp = new department[num3];
		if (num3 > 1)
		{
			for (int i = 0; i < num3 - 1; i++)
			{
				temp[i] = d[i];
			}
			temp[num3 - 1] = t;
			d = temp;
		}
		else{
			department *temp = nullptr;
			temp = new department[num3];
			temp[num3 - 1] = t;
			d = temp;
		}
	}
	void uni::add2(professor t, int n)
	{

		d[n - 1].add(t);
	}

