#ifndef __Sea__H
#define __Sea__H
#include "mapi.hh"


class Sea : public Mapi{
public:
	Sea(){};
	~Sea(){};

	std::string haveType()const{return "S";};

};


#endif