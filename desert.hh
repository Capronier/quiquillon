#ifndef __Desert__H
#define __Desert__H
#include "mapi.hh"


class Desert : public Mapi{
public:
	Desert(){};
	~Desert(){};

	virtual std::string haveType()const=0;

};


#endif