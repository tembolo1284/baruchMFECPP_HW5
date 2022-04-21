#include <iostream>
using namespace std;

class A
{
private:
	int m_data;

public:
	A() : m_data(GetValue()) {}
	int Calculate() { return m_data * 1.5; }
	virtual int GetValue() { return 10; }
};

class B : public A
{
public:
	virtual int GetValue() { return 20; }
};

int main()
{
	A a; B b; A* ap;

	ap = &a; std::cout << ap->GetValue() << ", " << ap->Calculate() << ", ";
	ap = &b; std::cout << ap->GetValue() << ", " << ap->Calculate() << std::endl;

	return 0;
}