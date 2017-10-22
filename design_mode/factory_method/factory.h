/*
 * =====================================================================================
 *
 *       Filename:  factory.h
 *
 *    Description:  factory
 *
 *        Version:  1.0
 *        Created:  2017年10月22日 15时04分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
class factory{
	public:
		factory()
		{
			cout << "create factory base\n" << endl;	
		}
		virtual ~factory()
		{
			cout << "destroy factory base\n" << endl;	
		}

};

class factory_bwm_x1 :public factory{
	public:
		factory_bwm_x1()
		{
		
		}
		bwm *create_x1(void)
		{
			return new bwm_x1;
		}
		void destroy_x1(bwm *ptr)
		{
			delete ptr;	
		}
		~factory_bwm_x1()
		{
		
		}

};

class factory_bwm_x2 :public factory{
	public:
		factory_bwm_x2()
		{
		
		}
		bwm *create_x2(void)
		{
			return new bwm_x2;
		}
		void destroy_x2(bwm *ptr)
		{
			delete ptr;	
		}
		~factory_bwm_x2()
		{
		
		}

};

