#include <greeter/message.h>
#include <greeter_config.h>

namespace greeter
{
	std::string get_message(const std::string& name)
	{
		return "Hello" + name + "!";
	}
}
