#ifndef __Sand__H
#define __Sand__H
#include "desert.hh"



class Sand : public Desert{
public:
	Sand(){};
	~Sand(){};

	std::string haveType()const{return "Ds";};

};


#endif