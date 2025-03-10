export module ErrorModule;

#include <stdexcept>
#include <string>


export class ConnectionError : public std::runtime_error
{
public:
	explicit ConnectionError(const std::string& message)
		: std::runtime_error(message)
	{
	}

};