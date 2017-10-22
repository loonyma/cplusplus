/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main
 *
 *        Version:  1.0
 *        Created:  2017年10月06日 15时29分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#include <iostream>

#include "smartptr.h"

class example :public RefCount{

	public:
		example(void)
		{
		}
		~example(void)
		{
		}
		void dosomething(void)
		{
			TRACE("DO something!\n");
		}
};

int main (int argc, char *argv[])
{

	{
		smartptr<example> p(new example);
		{
#if 0
			smartptr<example> p1;
			smartptr<example> p3;
			example *p2;
			p1 = p;
			TRACE("P1 %p p %p\n", *p1, *p);
			p1->dosomething();
			p2 = (example *)p1;
			p2->dosomething();
			p3 = p2; 
#endif
		}
		p->dosomething();

		(*p).dosomething();
	}

}
