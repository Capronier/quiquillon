#include "mapi.hh"

std::ostream& operator<<(std::ostream& flux,Mapi const &m)
{
	for (size_t i = 0; i < m.my_map.size(); ++i)
	{
		flux<<"Land "<<i<<"> "<<m.my_map[i]->haveType()<<std::endl;
	}
	return flux;
}