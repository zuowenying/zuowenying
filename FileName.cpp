#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>

//using namespace std;
//void print(string s, int n = 10)
//{
//	string temp;
//	if (s.length() > n)
//	{
//		temp=s.substr(0, n);
//		cout << temp << endl;
//	}
//	else
//	{
//		cout << s << endl;
//	}
//}
//int main()
//{
//	string s1, s2;
//	cout << "�������ַ���" << endl;
//	cin >> s1;
//	int sum;
//	cout << "ֻ��string�Ͳ���" << endl;
//	print(s1);
//	cout << "������n" << endl;
//	cin >> sum;
//	cout << "��string�Ͳ�����int�Ͳ���" << endl;
//	print(s1, sum);
//}
//class Circle {
//public:
//	float radius;
//	void area()
//	{
//		cout << "���Ϊ=" << pi * radius *radius<<endl;
//	}
//	void setr(float r)
//	{
//		radius = r;
//	}
//
//};
//int main()
//{
//	float r;
//	Circle c;
//	cout << "������Բ�İ뾶" << endl;
//	cin >> r;
//	c.setr(r);
//	c.area();
//}
//class Complex {
//private:
//	double real;
//	double imag;
//public:
//	Complex& SetReal(double r);
//	Complex& SetImag(double i);
//	Complex& SetComplex(double r, double i);
//	double GetReal()const;
//	double getImag()const;
//	void Print()
//	{
//		cout << real << "+" << imag << "i" << endl;
//	}
//	Complex Add(const Complex& a, const Complex& b);
//	double Compute();
//};
//Complex& Complex::SetReal(double r)
//{
//	real = r;
//	return *this;
//}
//Complex& Complex::SetImag(double i)
//{
//	imag = i;
//	return *this;
//}
//Complex& Complex::SetComplex(double r, double i)
//{
//	real = r;
//	imag = i;
//	return *this;
//}
//double Complex::GetReal()const
//{
//	return real;
//}
//double Complex::getImag()const
//{
//	return imag;
//}
//Complex Complex::Add(const Complex& a, const Complex& b)
//{
//	Complex temp;
//	temp.real = a.real + b.real;
//	temp.imag = a.imag + b.imag;
//	return temp;
//}
//double Complex::Compute()
//{
//	double m;
//	m = sqrt(real * real + imag * imag);
//	return m;
//}
//int main()
//{
//	double r, i;
//	cout << "�����븴��1��ʵ��" << endl;
//	cin >> r;
//	cout << "�����븴��1���鲿" << endl;
//	cin >> i;
//	cout << "����1Ϊ" << endl;
//	Complex c1;
//	c1.SetReal(r);
//	c1.SetImag(i);
//	c1.Print();
//	cout << "����1��ģ��Ϊ" << endl;
//	cout << c1.Compute() << endl;
//	cout << "�����븴��2��ʵ��" << endl;
//	cin >> r;
//	cout << "�����븴��2���鲿" << endl;
//	cin >> i;
//	cout << "����2Ϊ" << endl;
//	Complex c2;
//	c2.SetReal(r);
//	c2.SetImag(i);
//	c2.Print();
//	cout << "����2��ģ��Ϊ" << endl;
//	cout << c2.Compute() << endl;
//	cout << "�����������֮��Ľ��Ϊ" << endl;
//	Complex c3;
//	c3=c3.Add(c1, c2);
//	c3.Print();
//}
//class Sequence {
//private:
//	int last;
//	string s[100];
//public:
//	void output();
//	void del(string t);
//	void append(string a);
//	void init();
//};
//void Sequence::init()
//{
//	cout << "�������ַ�������" << endl;
//	cin >> last;
//	int i;
//	cout << "�������ַ���" << endl;
//	for (i = 0; i < last; i++)
//	{
//		cin >> s[i];
//	}
//}
//void Sequence::output()
//{
//	int i;
//	for (i = 0; i < last; i++)
//	{
//		cout << s[i]<<" ";
//	}
//}
//void Sequence::del(string t)
//{
//	int i, m;
//	for (i = 0; i < last; i++)
//	{
//		if (t == s[i])
//		{
//			last--;
//			m = i;
//			for (i = m; i < last+1; i++)
//			{
//				s[i] = s[i + 1];
//			}
//		}
//	}
//	
//}
//void Sequence::append(string a)
//{
//	s[last] = a;
//	last++;
//}
//int main()
//{ 
//	Sequence c;
//	c.init();
//	cout << "������Ҫɾ�����ַ���" << endl;
//	string s1,s2;
//	cin >> s1;
//	c.del(s1);
//	cout << "������Ҫ��ӵ��ַ���" << endl;
//	cin >> s2;
//	c.append(s2);
//	cout << "�����봦�����ַ���" << endl;
//	c.output();
//}
//class student {
//public:
//	void display();
//	void   setgrade(int x );
//private:
//	static int segment1, segment2, segment3, segment4, segment5;
//};
//void student::setgrade(int x) {
//	if (x <= 100 && x >= 90)
//	{
//		segment1++;
//	}
//	else if (x <= 89 && x >= 80)
//	{
//		segment2++;
//	}
//	else if (x <= 79 && x >= 70)
//	{
//		segment3++;
//	}
//	else if (x <= 69 && x >= 60)
//	{
//		segment4++;
//	}
//	else
//	{
//		segment5++;
//	}
//}
//void student::display()
//{
//	cout << "�ɼ���100-90���������" << segment1 << endl;
//	cout << "�ɼ���89-80���������" << segment2 << endl;
//	cout << "�ɼ���79-70���������" << segment3 << endl;
//	cout << "�ɼ���69-60���������" << segment4 << endl;
//	cout << "�ɼ���59-0���������" << segment5 << endl;
//}
//int student::segment1 = 0;
//int student::segment2 = 0;
//int student::segment3 = 0;
//int student::segment4 = 0;
//int student::segment5 = 0;
//int main()
//{
//	int number, i,a[100];
//	student s;
//	cout << "������ѧ������" << endl;
//	cin >> number;
//	cout << "������ѧ���ĳɼ�" << endl;
//	for (i = 0; i < number; i++)
//	{
//		cin >> a[i];
//		s.setgrade(a[i]);
//
//	}
//	s.display();
//	
//}
//class Rational {
//private:
//	int numberator;
//	int denominator;
//	int gcd(int, int);
//	void standardize();
//public:
//	void SetRational(int = 0, int = 1);
//	void SetRational(double);
//	int GetNumberator()const;
//	int GetDenominator()const;
//	void print();
//};
//void Rational::SetRational(int n, int d)
//{
//	numberator = n;
//	denominator = d;
//	standardize();
//}
//int Rational::GetNumberator()const
//{
//	return numberator;
//}
//int Rational::GetDenominator()const
//{
//	return denominator;
//}
//void Rational::print()
//{
//	cout << "�����ķ���Ϊ" << numberator << "/" << denominator << endl;
//}
//int Rational::gcd(int m, int n)
//{
//	int i,min,temp;
//	if (m > n)
//	{
//		min = n;
//	}
//	else
//	{
//		min = m;
//	}
//	for (i = 1; i <= min; i++)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			temp = i;
//		}
//	}
//	cout << "���Լ��Ϊ" << temp << endl;
//	return temp;
//}
//void Rational:: standardize()
//{
//	int s;
//	s =gcd(numberator, denominator);
//	numberator = numberator / s;
//	denominator = denominator / s;
//}
//void Rational::SetRational(double d)
//{
//	int i,count=0;
//	for (i = 0; ; i++)
//	{
//		d = d * 10;
//		if (d>1&&(int)d % 10 == 0)
//		{
//			break;
//		}
//		count++;
//	}
//	numberator = d/10;
//	denominator = pow(10, count);
//	standardize();
//}
//int main()
//{
//	int m, n;
//	cout << "���������" << endl;
//	cin >> m;
//	cout << "�������ĸ" << endl;
//	cin >> n;
//	Rational r;
//	r.SetRational(m, n);
//	r.print();
//	cout << "������һ��С��" << endl;
//	double d;
//	cin >> d;
//	r.SetRational(d);
//	r.print();
//}
//#include <iostream>
//#include<cmath>
//using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class shu {
//private:
//	int fenzi;
//	int fenmu;
//public:
//	void set(int m, int n);
//	shu operator+(shu c);
//	shu operator-(shu c);
//	shu operator*(shu c);
//	shu operator/(shu c);
//	shu operator==(shu c);
//	void gcd();
//	void print();
//};
//void shu::print()
//{
//	if (fenzi == fenmu)
//	{
//		cout << 1 << endl;
//	}
//	else {
//
//		cout << fenzi << "/" << fenmu << endl;
//	}
//}
//
//void shu::gcd()
//{
//	int min, i, temp = 1;
//	if (fabs(fenzi) > fabs(fenmu))
//	{
//		min = fabs(fenmu);
//	}
//	else
//	{
//		min = fabs(fenzi);
//	}
//	for (i = 2; i <= min; i++)
//	{
//		if (fenzi % i == 0 && fenmu % i == 0)
//		{
//			temp = i;
//		}
//	}
//	fenzi = fenzi / temp;
//	fenmu = fenmu / temp;
//}
//void shu::set(int m, int n)
//{
//	if (n == 0)
//	{
//		cout << "��ĸ����Ϊ0��������������Ӻͷ�ĸ" << endl;
//		cout << "���������" << endl;
//		cin >> m;
//		cout << "�������ĸ" << endl;
//		cin >> n;
//	}
//	fenzi = m;
//	fenmu = n;
//}
//shu shu::operator+(shu c)
//{
//	shu temp;
//	temp.fenmu = fenmu * c.fenmu;
//	temp.fenzi = fenzi * c.fenmu + c.fenzi * fenmu;
//	temp.gcd();
//	return temp;
//}
//shu shu::operator-(shu c)
//{
//	shu temp;
//	temp.fenmu = fenmu * c.fenmu;
//	temp.fenzi = fenzi * c.fenmu - c.fenzi * fenmu;
//	temp.gcd();
//	return temp;
//
//}
//shu shu::operator*(shu c)
//{
//	shu temp;
//	temp.fenzi = fenzi * c.fenzi;
//	temp.fenmu = fenmu * c.fenmu;
//	temp.gcd();
//	return temp;
//}
//shu shu::operator/(shu c)
//{
//	shu temp;
//	temp.fenmu = fenmu * c.fenzi;
//	temp.fenzi = fenzi * c.fenmu;
//	temp.gcd();
//	return temp;
//}
//shu shu::operator==(shu c)
//{
//	shu temp;
//	temp.fenzi = fenzi * c.fenmu;
//	temp.fenmu = fenmu * c.fenzi;
//	if (temp.fenzi == temp.fenmu)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������������" << endl;
//	}
//	return temp;
//}
//int main()
//{
//	shu s1, s2, s;
//	int m1, n1, m2, n2;
//	cout << "�������һ������" << endl;
//	cin >> m1;
//	cout << "�������һ����ĸ" << endl;
//	cin >> n1;
//	s1.set(m1, n1);
//	cout << "������ڶ�������" << endl;
//	cin >> m2;
//	cout << "������ڶ�����ĸ" << endl;
//	cin >> n2;
//	s2.set(m2, n2);
//	s = s1 * s2;
//	cout << "s1*s2=";
//	s.print();
//	s = s1 + s2;
//	cout << "s1+s2=";
//	s = s1 + s2;
//	s.print();
//	cout << "s1-s2=";
//	s = s1 - s2;
//	s.print();
//	cout << "s1/s2=";
//	s = s1 / s2;
//	s.print();
//	s1 == s2;
//}
//class Set {
//private:
//	int a[100];
//	int last;
//public:
//	Set(int x,int b[100]);
//	Set();
//	friend Set operator+(Set m, Set n);
//	friend Set operator-(Set m, Set n);
//	friend Set operator*(Set m, Set n);
//	Set operator()(int x);
//	friend ostream& operator<<(ostream& os, const Set& m);
//	friend istream& operator>>(istream& is, Set& m);
//};
//Set::Set()
//{
//
//}
//ostream& operator<<(ostream& os, const Set& m)
//{
//	int i;
//	for (i = 0; i < m.last; i++)
//	{
//		os << m.a[i] << " ";
//	}
//	return os;
//}
//istream& operator>>(istream& is, Set& m)
//{
//	int i;
//	cout << "���鳤��Ϊ" << endl;
//	is >> m.last;
//	cout << "�������������Ϊ" << endl;
//	for (i = 0; i < m.last; i++)
//	{
//		is >> m.a[i];
//	}
//	return is;
//}
//Set::Set(int x,int b[100])
//{
//	last = x;
//	int i;
//	for (i = 0; i < last; i++)
//	{
//		a[i] = b[i];
//	}
//}
//Set operator*(Set m, Set n)
//{
//	int i, j,count=0;
//	Set temp;
//	for (i = 0; i <m.last; i++)
//	{
//		for (j = 0; j < n.last; j++)
//		{
//			if (m.a[i] == n.a[j])
//			{
//				temp.a[count] = n.a[j];
//				count++;
//			}
//		}
//	}
//	temp.last = count;
//	return temp;
//}
//Set operator-(Set m, Set n)
//{
//	int i, j,count=0,coun=0;
//	Set temp1,temp2;
//	for (i = 0; i < m.last; i++)
//	{
//		for (j = 0; j < n.last; j++)
//		{
//			if (m.a[i] == n.a[j])
//			{
//				temp1.a[count] = n.a[j];
//				count++;
//			}
//		}
//	}
//	for (i = 0; i <m.last; i++)
//	{
//		for (j = 0; j < count; j++)
//		{
//			if (m.a[i] != temp1.a[j])
//			{
//				if (j == count - 1)
//				{
//					temp2.a[coun] = temp1.a[j];
//					coun++;
//				}
//			}
//			else {
//				break;
//			}
//		}
//	}
//	temp2.last = coun;
//	return temp2;
//
//}
//Set operator+(Set m, Set n)
//{
//	int i, j,count;
//	count = m.last;
//	Set temp1;
//	for (i = 0; i < m.last; i++)
//	{
//		temp1.a[i] = m.a[i];
//	}
//	for (i = 0; i < n.last; i++)
//	{
//		for (j = 0; j < m.last; j++)
//		{
//			if (n.a[i] == temp1.a[j])
//			{
//				break;
//			}
//			else
//			{
//				if (j == m.last - 1)
//				{
//					temp1.a[count] = n.a[i];
//					count++;
//				}
//			}
//		}
//	}
//	temp1.last = count;
//	return temp1;
//}
//Set Set::operator()(int x)
//{
//    a[last ] = x;
//	last = last + 1;
//	return *this;
//}
//int main()
//{
//	int m;
//	Set a, b, c;
//	cin >> a;
//	cin >> b;
//	cout << "���������ϵĲ���Ϊ" << endl;
//	c = a + b;
//	cout << c << endl;
//	cout << "���������ϵĲΪ" << endl;
//	c = a - b;
//	cout << c << endl;
//	cout << "���������ϵĽ���Ϊ" << endl;
//	c = a * b;
//	cout << c << endl;
//	cout << "������Ҫ��ӵ�Ԫ��" << endl;
//	cin >> m;
//	cout << "�����Ԫ�صļ���Ϊ" << endl;
//	c = a.operator()(m);
//	cout << c << endl;
//}
//class Family {
//protected:
//	string name;
//	string working;
//	int age;
//public:
//	virtual void print()=0;
//	Family(string n = "zuote", string w = "wan", int a = 10)
//	{
//		name = n;
//		working = w;
//		age = a;
//	}
//};
//void Family::print()
//{
//	cout<< name << " " << age << " " << working << endl;
//}
//class Grandma :public Family {
//public:
//	void print();
//	Grandma(string n, string w, int a):Family(n,w,a)
//	{
//	}
//};
//void Grandma::print()
//{
//	cout<<"����" <<" "<< name << " " << age << " " << working << endl;
//}
//class Father:public Family{
//public:
//	void print()
//	{
//		cout<<"�ְ�" <<" "<< name << " " << age << " " << working << endl;
//	}
//	Father(string n,string w,int a):Family(n, w, a)
//	{
//	}
//};
//class mother :public Family {
//public:
//	void print()
//	{
//		cout <<"����"<<" "<< name << " " << age << " " << working << endl;
//	}
//	mother(string n, string w, int a) :Family(n, w, a)
//	{
//	}
//};
//class brother :public Family {
//public:
//	void print()
//	{
//		cout <<"�ܵ�"<<" "<< name << " " << age << " " << working << endl;
//	}
//	brother(string n, string w, int a) :Family(n, w, a)
//	{
//
//	}
//};
//int main()
//{
//	Grandma a("����Ӣ", "ϲ������", 83);
//	a.print();
//	Father b("������", "ϲ��ྐྵ���", 40);
//	b.print();
//	mother c("��ΰ��", "ϲ������", 40);
//	c.print();
//	brother d("����", "ϲ������Ϸ",10 );
//	d.print();
//}
//class mianji {
//protected:
//	int lenth;
//	int wideth;
//	int radius;
//	int a;
//	int b;
//	double m;
//public:
//	virtual void print() = 0;
//};
//class Square :public mianji {
//public:
//	Square(int i)
//	{
//		lenth = i;
//		m = lenth * lenth;
//	}
//	void print()
//	{
//		cout << "�����ε����Ϊ" << m << endl;
//	}
//};
//class Rectangle :public mianji {
//public:
//	Rectangle(int i, int n)
//	{
//		lenth = i;
//		wideth = n;
//		m = lenth * wideth;
//	}
//	void print()
//	{
//		cout << "�����ε����" << m << endl;
//	}
//};
//class Circle :public mianji {
//public:
//	Circle(int r)
//	{
//		radius = r;
//		m = pi * radius * radius;
//	}
//	void print()
//	{
//		cout << "Բ�����Ϊ" << m << endl;
//	}
//};
//class Ellipse :public mianji {
//public:
//	Ellipse(int i, int j) {
//		a = i;
//		b = j;
//		m = pi * a * b;
//	}
//	void print()
//	{
//		cout << "��Բ�����" << m << endl;
//	}
//};
//int main()
//{
//	int a, b, i, j, k, e;
//	cout << "�����������εı߳�" << endl;
//	cin >> a;
//	cout << "�����볤���εĳ��Ϳ�" << endl;
//	cin >> b >> i;
//	cout << "������Բ�İ뾶" << endl;
//	cin >> j;
//	cout << "��������Բ�ĳ�����Ͷ̰���" << endl;
//	cin >> k >> e;
//	Square s(a);
//	s.print();
//	Rectangle r(b, i);
//	r.print();
//	Circle c(j);
//	c.print();
//	Ellipse n(k, e);
//	n.print();
//}
//class compute {
//	double price;
//	string manufacturer;
//};
//class computeraccessory :public compute {
//	 
//};
//class motherboard :public computeraccessory {
//	string chipset;//оƬ
//};
//class memory :public computeraccessory {
//	string capacity;//�ڴ�����
//};
//class monitor :public computeraccessory {
//	string mtype;//��ʾ������
//};
//class employee {
//protected:
//	string name;
//	static int count;
//	int no;
//	double money;
//public:
//	employee()
//	{
//		no = count++;
//		cout << "ְ������Ϊ��" << endl;
//		cin >> name;
//	}
//	virtual void pay() = 0;
//	virtual void display() = 0;
//};
//class manager :public employee {
//public:
//	void pay()
//	{
//		money = 8000;
//	}
//	void display()
//	{
//		cout << "����" << name << ",���Ϊ��" << no << "��нΪ��" << money << endl;
//	}
//};
//class technician :public employee {
//public:
//	technician()
//	{
//		cout << "������Ա��������Сʱ" << endl;
//		cin >> time;
//	}
//	void pay()
//	{
//		money = 100 * time;
//	}
//	void display()
//	{
//		cout << "������Ա��" << name << "��ţ�" << no << "��н��" << money << endl;
//	}
//protected:
//	int time;
//};
//class salesman 

//int gcd(int m, int n)
//{
//	int i,temp,k;
//	if (m > n)
//	{
//		temp = n;
//	}
//	else
//	{
//		temp = m;
//	}
//	for (i = 1; i <= temp; i++)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			k = i;
//		}
//	}
//	return k;
//}
#include <iostream>
using namespace std;
//template<typename T>
//class Set {
//protected:
//	T a[100];
//	int n;
//public:
//	Set()
//	{
//
//	}
//
//
//	friend Set operator+(Set c1, Set c2)
//	{
//		int i, j;
//		Set temp;
//		temp.n = c1.n;
//		for (i = 0; i < c1.n; i++)
//		{
//			temp.a[i] = c1.a[i];
//		}
//		int count = c1.n;
//		for (i = 0; i < c2.n; i++)
//		{
//			for (j = 0; j < c1.n; j++)
//			{
//				if (c2.a[i] == c1.a[i])
//				{
//					break;
//				}
//				else if (j == c1.n - 1)
//				{
//					temp.a[count] = c2.a[i];
//					count++;
//				}
//			}
//		}
//		temp.n = count;
//		return temp;
//	}
//	friend	Set operator-(Set c1, Set c2)
//	{
//		int i, j;
//		Set temp;
//		int count = 0;
//		for (i = 0; i < c1.n; i++)
//		{
//			for (j = 0; j < c2.n; j++)
//			{
//				if (c1.a[i] != c2.a[i])
//				{
//					if (j == c2.n - 1)
//					{
//						temp.a[count] = c1.a[i];
//						count++;
//					}
//				}
//			}
//		}
//		temp.n = count;
//		return temp;
//	}
//	friend istream& operator>>(istream& s, Set& shu)
//	{
//		int i;
//		s >> shu.n;
//		for (i = 0; i < shu.n; i++)
//		{
//			s >> shu.a[i];
//		}
//		return s;
//	}
//	friend ostream& operator<<(ostream& s, Set& shu)
//	{
//		int i;
//		for (i = 0; i < shu.n; i++)
//		{
//			s << shu.a[i]<<" ";
//		}
//		cout << endl;
//		return s;
//	}
//};
//int main()
//{
//	Set<int> f;
//	Set<int> g;
//	Set<int> y;
//	cin >> f;
//	cin >> g;
//	y = f + g;
//	cout << "f+g=" << y;
//	y = f - g;
//	cout << "f-g=" << y;
//
//}
//template<typename T>
//T find(T a[], int n, T b)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == b)
//		{
//			cout << "�ҵ�������" << endl;
//			return b;
//		}
//		else if (i == n - 1)
//		{
//			cout << "δ�ҵ�������" << endl;
//		}
//	}
//}
//int main()
//{
//	cout << "��������ĳ���Ϊ" << endl;
//	int n, i;
//	cin >> n;
//	int c[100];
//	cout << "�����������������" << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> c[i];
//	}
//	int shu;
//	cout << "��������ҵ�����" << endl;
//	cin >> shu;
//	find(c, n, shu);
//	cout << "�ַ�������ĳ���Ϊ" << endl;
//	cin >> n;
//	string d[100], m;
//	cout << "�������ַ����������������" << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> d[i];
//	}
//	cout << "��������ҵ�����" << endl;
//	cin >> m;
//	find(d, n, m);
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int count[1000];
//	cin >> n >> m;
//	int i, j;
//	int c = 0;//����
//	int a[1000];
//	for (i = 0; i < m; i++)
//	{
//		cin >> count[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (count[j] == i)
//			{
//				c++;
//			}
//		}
//	}
//	if (c == n)
//	{
//		cout << n;
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				if (count[j] == i)
//				{
//					break;
//				}
//				else if (j == m - 1)
//				{
//					cout << i << " ";
//				}
//			}
//		}
//	}
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int m, n;
//	int temp,sum1=0,sum2=0;
//	while(a){
//		temp = a % 10;
//		sum1 = sum1 * 10 + temp;
//		a = a / 10;
//	}
//	while(b)
//	{
//		temp = b % 10;
//		sum2 = sum2 * 10 + temp;
//		b = b / 10;
//	}
//	if (sum1 > sum2)
//	{
//		cout << sum1;
//	}
//	else
//	{
//		cout << sum2;
//	}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int count[1000],a[1000];
//	cin >> n >> m;
//	int i, j;
//	int c = 0,k=0;//����
//	int a[1000];
//	for (i = 0; i < m; i++)
//	{
//		cin >> count[i];
//	}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				if (count[j] == i)
//				{   
//					break;
//				}
//				else if (j == m - 1)
//				{
//					a[k] = i;
//					k++;
//					c++;
//					
//				}
//			}
//		}
//		if(c>0)
//	}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int i, a[3][100];
//	char ch[2][100];
//	for (i = 1; i <= N; i++)
//	{
//		cin >> a[0][i-1] >> ch[0][i-1] >> a[1][i - 1] >> ch[1][i-1] >> a[2][i - 1];
//	}
//	int sum;
//	for (i = 1; i <= N; i++)
//	{
//		if (ch[0][i-1] == '-' && ch[1][i-1] == '+')
//		{
//			sum = a[0][i-1] - a[1][i-1]+ a[2][i-1];
//			cout << sum << endl;
//		}
//		else if (ch[0][i-1] == '-' && ch[1][i-1] == '*')
//		{
//			sum = a[0][i-1] - a[1][i - 1] * a[2][i - 1];
//			cout << sum << endl;
//		}
//		else if (ch[0][i-1] == '+' && ch[1][i-1] == '*')
//		{
//			sum = a[0][i-1] + a[1][i-1] * a[2][i-1];
//			cout << sum << endl;
//		}
//		else if (ch[0][i-1] =='+' && ch[1][i - 1] == '-')
//		{
//			sum = a[0][i - 1] + a[1][i - 1] - a[2][i - 1];
//			cout << sum << endl;
//		}
//		else if (ch[0][i - 1] =='*' && ch[1][i - 1] == '-')
//		{
//			sum = a[0][i - 1] * a[1][i - 1] - a[2][i - 1];
//			cout << sum << endl;
//		}
//		else if (ch[0][i - 1] == '*' && ch[1][i - 1] == '+')
//		{
//			sum = a[0][i - 1] * a[1][i - 1] + a[2][i - 1];
//			cout << sum << endl;
//		}
//	}
//}
#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	double sum=150;
	int year=1;
	while (1)
	{
		if (n >= sum)
		{
			if (year >= 10)
			{
				cout << "Imposible" << endl;
				break;
			}
			else
			{

				cout << year << " " << sum << endl;
				break;
			}
		}
		else {

			sum = sum + sum * (k * 0.01);
			n = n+n;
			year++;
		}
	}
}