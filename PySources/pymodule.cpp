extern "C"
{
	#include <wrpc.h>
}
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(wrpcpy)
{
    using namespace boost::python;
    def("hello", GetHello);
}