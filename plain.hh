#ifndef __Plain__H
#define __Plain__H
#include "mapi.hh"


class Plain : public Mapi{
public:
	Plain(){};
	~Plain(){};

	std::string haveType()const{return "P";};

};


#endif