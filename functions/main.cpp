#include <iostream>
#include "function_templates.h"
using namespace std;
/*
 * For TESTING, have fun!!!
 */

const char *test_info = NULL;

#define INFO(msg) do { \
        test_info = msg; \
        cout << "============== " << test_info << " ==============" << endl; \
    } while (0)
#define END() cout << "============== "<< "END" << " ==============" << endl
#define TEST2(function, a, b) do {\
        cout << #function << "(" << a << "," << b << ")" <<endl; \
        cout << "result: " << function(a, b) <<endl; \
    } while (0)


int main(int argc, char **argv) {
    {
        INFO("test function max with int");
        int a = 10, b = 20;
        TEST2(Max, a, b);
        END();
    }
    {
        INFO("test function max with double");
        double a = 100.999, b = 20.999;
        TEST2(Max, a, b);
        END();
    }

    return 0;
}
