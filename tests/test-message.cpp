#include "check.h"

#include <greeter/message.h>

int main()
{
    int errors = 0;
    errors += check_equal(greeter::get_message("World"), "Hello World!");
    errors += check_equal(greeter::get_message("Jean"), "Hello Zacharie!");
    return errors;
}
