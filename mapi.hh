#ifndef __MAPI__H
#define __MAPI__H
#include <string>


class Mapi {
public:
	Mapi(){};
	~Mapi(){};

	virtual std::string haveType()const=0;
	
};


#endif