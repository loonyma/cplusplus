/*
 * =====================================================================================
 *
 *       Filename:  maic.cpp
 *
 *    Description:  main
 *
 *        Version:  1.0
 *        Created:  2017年10月22日 14时09分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#include "product.h"
#include "factory.h"

int main(int argc, char *argv[])
{

	factory_bwm_x1 fx1;
	factory_bwm_x2 fx2;
	
	bwm *x1 = fx1.create_x1();
	bwm *x2 = fx2.create_x2();

	x1->do_something();
	x2->do_something();

	fx1.destroy_x1(x1);
	fx2.destroy_x2(x2);

}

