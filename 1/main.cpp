#define BOOST_STACKTRACE_USE_BACKTRACE
#include <boost/stacktrace.hpp>
#include <iostream>

namespace foo {
    class Bar {
    public:
        void fooBar() {
            std::cout << boost::stacktrace::stacktrace() << std::endl;
        }
    };
}

int main(int argc, char *argv[]) {
    foo::Bar bar;
    bar.fooBar();
}

/*void bar(int n) {
    if (n <= 0) {
        // ... somewhere inside the `bar(int)` function that is called recursively:
        std::cout << boost::stacktrace::stacktrace();
        return;
    }
    bar(n-1);
}

int main() {
    bar(4);
    }*/


