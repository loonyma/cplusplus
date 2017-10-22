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

class factory_bwm :public factory{
	public:
		factory_bwm()
		{
		
		}
		bwm *create_factory_bwm(int type)
		{
			switch(type){
				case 1:
					return new bwm_x1;
					break;
				case 2:
					return new bwm_x2;
					break;
				default:
					break;
			
			}
		}
		void destroy_factory_bwm(bwm *ptr)
		{
			delete ptr;	
		}

		~factory_bwm()
		{
		
		}

};

