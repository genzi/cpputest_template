#include "mocks.hpp"

extern "C" int internal1(int arg1) {
    mock().actualCall("internal1")
          .returnIntValueOrDefault(arg1);
    return arg1;
}
