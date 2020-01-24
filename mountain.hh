#ifndef __Mountain__H
#define __Mountain__H
#include "mapi.hh"


class Mountain: public Mapi{
public:
	Mountain(){};
	~Mountain(){};

	std::string haveType()const{return "M";};

};


#endif