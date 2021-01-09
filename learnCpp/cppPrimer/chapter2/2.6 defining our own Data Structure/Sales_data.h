#ifndef SALES_DATA_H  // ifndef not been defined
#define SALES_DATA_H

#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned int units_sold = {0};
	double revenue = {0.0};
};

#endif  // dont forget