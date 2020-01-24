#ifndef __Land__H
#define __Land__H
#include <string>


class Land {
public:
	Land(){};
	~Land(){};

	virtual std::string haveType()const=0;
	
};


#endif