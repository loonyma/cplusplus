#ifndef _STUDENT_H_ 
#define _STUDENT_H_

#include <stdio.h>
#include <string.h>
namespace exap{

class student{

public:
	student(char *name = "lisi", int id = 100);
	~student();
	/*copy construct func*/
	inline student(const student &stu){
		if(stu.m_name != NULL){
			int len = strlen(stu.m_name);
			m_name = new char(len + 1);
			m_id = stu.m_id;
			memcpy(m_name,stu.m_name, len + 1);
		};
	}
	student& operator=(const student & stu);
	void setid(int id);
	int getid() const;
	char *getname() const;
private:
	char *m_name;
	int m_id;
	
};
}

#endif


