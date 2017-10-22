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

	factory_bwm fac;
	
	bwm *x1 = fac.create_factory_bwm(1);
	bwm *x2 = fac.create_factory_bwm(2);

	fac.destroy_factory_bwm(x1);
	fac.destroy_factory_bwm(x2);


}

