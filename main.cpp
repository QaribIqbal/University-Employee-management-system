#include"Header.h"
void menu(int &c)
{
	cout << "1-Add Professor\n";
	cout << "2-Add Department\n";
	cout << "3-Add University\n";
	cin >> c;
	cin.ignore();
}
void listd(int n2, department *obj)
{
	for (int i = 0; i < n2; i++)
	{
		cout << i + 1 << "- ";
		obj[i].dis();
	}
}
void listu(int n3, uni *obj)
{
	for (int i = 0; i < n3; i++)
	{
		cout << i + 1 << "- ";
		obj[i].dis();
	}
}
void listt(int n3, uni *obj)
{
	for (int i = 0; i < n3; i++)
	{
		cout << i + 1 << "- ";
		cout << "UNI NAME : "; obj[i].dis();
		obj[i].Disud();
	}
}
void display(uni *ob, int n3, int n1, int n2)
{
	for (int k = 0; k < n3; k++)
	{
		ob[k].display(n1, n2);
	}
}

int main()
{
	professor *obj = nullptr;
	department *o = nullptr;
	uni *ob = nullptr;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int ans = 1;
	int choice = 0;
	while (ans == 1){
	if (choice == 1)
	{
		n1++;
		professor *temp;
		temp = new professor[n1];
		if (n1 > 1)
		{
			for (int i = 0; i < n1 - 1; i++)
			{
				temp[i] = obj[i];
			}
		}
		string n;
		int s;
		cout << "\nEnter the name of the professor = ";
		getline(cin, n);
		cout << "\nEnter the salary of the professor = ";
		cin >> s;
		temp[n1 - 1].set(n, s);
		obj = temp;
		/////////////////////////////////////////////////////////////////////////////////////////////////
		listt(n2, ob);
		int num = 0;
		int x = 0;
		cout << "\nEnter the number of department to which you want to add the professor";
		cin >> num;
		cout << "\nEnter the number of uni to which you want to add the professor";
		cin >> x;
		ob[x - 1].add2(temp[n1 - 1], num);
	}
	else if (choice == 2)
	{
		n2++;
		department *temp;
		temp = new department[n2];
		if (n2 > 1)
		{
			for (int i = 0; i < n2 - 1; i++)
			{
				temp[i] = o[i];
			}
		}
		string n;
		cout << "\nEnter the name of the department = ";
		getline(cin, n);
		temp[n2 - 1].naam(n);
		o = temp;
		listu(n3, ob);
		int num = 0;
		cout << "\nEnter the number of university to which you want to add the department";
		cin >> num;
		ob[num - 1].add(temp[n2 - 1]);

	}
	else if (choice == 3)
	{
		n3++;
		uni *temp;
		temp = new uni[n3];
		if (n3 > 1)
		{
			for (int i = 0; i < n3 - 1; i++)
			{
				temp[i] = ob[i];
			}
		}
		string n;
		cout << "\nEnter the name of the university = ";
		getline(cin, n);
		temp[n3 - 1].naam(n);
		ob = temp;
	}
	else if (choice == 0)
	{
		n3++;
		uni *temp;
		temp = new uni[n3];
		if (n3 > 1)
		{
			for (int i = 0; i < n3 - 1; i++)
			{
				temp[i] = ob[i];
			}
		}
		
		string n;
		cout << "\nEnter the name of the university = ";
		getline(cin, n);
		temp[n3 - 1].naam(n);
		ob = temp;
		//delete[]temp;
		n2++;
		department *temp2;
		temp2 = new department[n2];
		if (n2 > 1)
		{
			for (int i = 0; i < n2 - 1; i++)
			{
				temp2[i] = o[i];
			}
		}
		string n1;
		cout << "\nEnter the name of the department = ";
		getline(cin, n1);
		temp2[n2 - 1].naam(n1);
		o = temp2;
		listu(n3, ob);
		int num = 0;
		cout << "\nEnter the number of university to which you want to add the department";
		cin >> num;
		ob[num - 1].add(temp2[n2 - 1]);
	}
	else {
		cout << "\nInvalid" << endl;
	}
	cout << "\nDo you want to perform another task!\n1-'y' for Yes\n2-'n' for NO \n";
	cin >> ans;
	if (ans == 2)
	{
		break;
	}
		menu(choice);
	}
	display(ob, n3, n1, n2);
	delete[]obj;
	delete[]o;
	delete[]ob;
	system("pause");
	return 0;
}
		
