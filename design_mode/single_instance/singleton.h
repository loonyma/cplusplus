/*
 * =====================================================================================
 *
 *       Filename:  singleton.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年10月24日 18时45分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#ifndef __SINGLETON__
#define SINGLETON

#include <iostream>
#include <pthread.h>

using namespace::std;
/*this is a complex implementation, actually we have another
  simple way, that is as below
  singleton *singleton::m_single = new singleton as globlelly
  singleton *get_instance(void)
  {
	return m_single;
  }
*/
class singleton{
	public:
		static singleton *m_single;
		static pthread_mutex_t mutex;
		static singleton *get_instance(void)
		{
			pthread_mutex_lock(&mutex);
			if(m_single == NULL)
				m_single = new singleton;
		
			pthread_mutex_unlock(&mutex);
			return m_single;
		}
		virtual ~singleton()
		{
		}

		/* this is a inner class used for free resource when program exit*/
		class recovery{
			public:
				~recovery()
				{
					cout << "free m_singleton" << endl;
					delete m_single;	
				}
		
		};

		static recovery recy;
	private:
		singleton()
		{
			pthread_mutex_init(&mutex, NULL);
		}
		singleton(singleton &)
		{
			cout << "this is copy constructure singleton" << endl;
		}
		singleton & operator=(singleton &)
		{
		}
		

};

pthread_mutex_t singleton::mutex;
singleton *singleton::m_single = NULL;
//singleton::recovery recy;

#endif
