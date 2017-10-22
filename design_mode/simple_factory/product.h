/*
 * =====================================================================================
 *
 *       Filename:  product.h
 *
 *    Description:  bwm
 *
 *        Version:  1.0
 *        Created:  2017年10月22日 13时50分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#ifndef _BWM_
#define _BWM_

#include <iostream>

using namespace::std;

class bwm{
	public:
		bwm()
		{
			cout << "create a bwm car\n" << endl;
		}

		virtual ~bwm()
		{
			cout << "destory a bwm car\n" << endl;
		}

};

class bwm_x1 :public bwm{
	public:
		bwm_x1()
		{
			cout << "create a bwm_x1 car\n" << endl;
		}

		~bwm_x1()
		{
			cout << "destory a bwm_x1 car\n" << endl;
		}

};

class bwm_x2 :public bwm{
	public:
		bwm_x2()
		{
			cout << "create a bwm_x2 car\n" << endl;
		}

		~bwm_x2()
		{
			cout << "destory a bwm_x2 car\n" << endl;
		}

};
#endif
