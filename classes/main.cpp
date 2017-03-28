#include <iostream>
#include "class_templates.h"
#include "myclass.h"
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
        INFO("TEST "#function);\
        cout << #function << "(" << a << "," << b << ")" <<endl; \
        cout << "result: " << function(a, b) <<endl; \
        END();\
    } while (0)
#define TEST(function) do {\
        INFO("TEST "#function);\
        cout << #function << "( )" <<endl; \
        cout << "result: " << function() <<endl; \
        END();\
    } while (0)


int main(int argc, char **argv) {
    {
        MyClass *single_test = Singleton<MyClass>::instance();
        TEST(single_test->print);

        MyClass *addr1 = Singleton<MyClass>::instance();
        MyClass *addr2 = Singleton<MyClass>::instance();
        cout<<"addr1: "<<static_cast<void *>(addr1)<<endl;
        cout<<"addr2: "<<static_cast<void *>(addr2)<<endl;
    }

    return 0;
}
