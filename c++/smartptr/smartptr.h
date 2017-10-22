/*
 * =====================================================================================
 *
 *       Filename:  smartptr.h
 *
 *    Description:  implemetation a class smartptr
 *
 *        Version:  1.0
 *        Created:  2017年10月06日 14时59分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

#ifndef _SMARTPTR_
#define _SMARTPTR_

#include <stdio.h>
#include "refcount.h"

template <typename T>
class smartptr{
	public:
		smartptr(T *_p)
			:m_p(_p)
		{
			m_p->upcount();	
			TRACE("smartptr constructor m_p %p, this %p\n", m_p, this);

		}
		smartptr()
		{
			m_p = NULL;
		}

		~smartptr()
		{
			m_p->downcount();
			//m_p = NULL;
			TRACE("smartptr deconstructor\n");
		}
		/* reload (T*) as below
		   smartptr<T> p1 = new T;
		   reload (T*)p1
		*/
		operator T*(void)
		{
			TRACE("operator = T* m_p %p\n", m_p);
			return m_p;	
		}
		/* reload sinaro as below
		   smartptr<T> p1 = new T;
		   smartptr<T> p2;
		   p2 = p1
		*/
		smartptr & operator=(smartptr<T> &_p)
		{
			TRACE("this %p m_p %p _p.m_p %p\n", this, m_p, _p.m_p);	
			if(m_p != NULL){
				m_p->downcount();
			}
			m_p = _p.m_p;
			m_p->upcount();
			return *this;
		}
		/* reload sinaro as below
		   smartptr<T> p1 = new T;
		   T *P2 = new T;
		   p1 = p2; 
		*/
		smartptr & operator=(T* _p)
		{	
			TRACE("operator = T* P %p *this %p\n", _p, *this);
			m_p = _p;
			return *this;
		}
		T &operator *(void)
		{
			return *m_p;	
		}
		T *operator ->(void)
		{
			return m_p;	
		}
	private:
		T *m_p;

};

#endif
