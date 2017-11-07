/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main
 *
 *        Version:  1.0
 *        Created:  2017年10月24日 20时00分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#include <iostream>
#include "singleton.h"

using namespace::std;

int main(int argc, char *argv[])
{

	singleton *ptr1 = singleton::get_instance();
	singleton *ptr2 = singleton::get_instance();
	
	if(ptr1 == ptr2){
		cout << "get single instance successfully!\n" << endl;
	}
}
