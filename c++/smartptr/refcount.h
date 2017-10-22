/*
 * =====================================================================================
 *
 *       Filename:  refcount.h
 *
 *    Description:  Refcount
 *
 *        Version:  1.0
 *        Created:  2017年10月06日 14时45分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
#ifndef _REF_COUNT_
#define _REF_COUNT_

#include <stdio.h>

#ifdef TRACE_LEVEL
#define TRACE printf
#else
#define TRACE
#endif

class RefCount{
	public:
		RefCount(void){
			m_count = 0;	
		}
		virtual ~RefCount(){
		}
		void upcount(void){
			++m_count;
			TRACE("up to %d \n", m_count);
		}
		void downcount(void){
			if(--m_count == 0){
				TRACE("delete down to %d this %p\n", m_count, this);
				delete this;	
			}
			TRACE("down to %d \n", m_count);
		}

	private:
		int m_count;
};
#endif
