#include <iostream>
#include "student.h"

using namespace::std;
using namespace::exap;

student func()
{
	student stu1("wang", 10);

	cout << stu1.getname() << endl;
	cout << stu1.getid() << endl;
	return stu1;
	
}
int main (int argc, char *argv[])
{
	student stu("zhangsan", 1);

	cout << stu.getid() << endl;
	
	stu.setid(2);

	cout << stu.getid() << endl;
	
	student stu1;

	cout << stu1.getname() << endl;
	cout << stu1.getid() << endl;
	
	student stu2(stu);

	cout << stu2.getname() << endl;
	cout << stu2.getid() << endl;

	student stu3;
	stu3 = stu1;
	cout << stu3.getname() << endl;
	cout << stu3.getid() << endl;

}
