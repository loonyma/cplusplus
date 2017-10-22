#include "student.h"
#include <iostream>

using namespace::std;
namespace exap{

student::student(char *name, int id)
	:m_name(name), m_id(id)
{
		
	int len = strlen(name);
	m_name = new char(len + 1);
	memcpy(m_name, name, len + 1);

}


student::~student()
{
	delete m_name;
	m_name = NULL;

}
void student::setid(int id)
{
	m_id = id;
}

int student::getid() const
{

	return m_id;
}
	
char *student::getname() const
{

	return m_name;
}

/*reload operator = */
student& student::operator=(const student& stu)
{
	if(this == &stu)
		return *this;

	delete [] m_name;
	m_name = NULL;
	int len = strlen(stu.m_name);
	m_name = new char(len + 1);
	memcpy(m_name,stu.m_name, len + 1);
	m_id = stu.m_id;

	return *this;
}

}
