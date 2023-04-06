#ifdef _MSC_VER
#define _SCL_SECURE_NO_WARNINGS
#endif

#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h>
#include <crtdbg.h>
#endif // check memory leaks

#include "vector_test.h"
#include "list_test.h"
#include "deque_test.h"
#include "map_test.h"
#include "queue_test.h"
#include "stack_test.h"


int main()
{
	using namespace mystl::test;

	std::cout.sync_with_stdio(false);

	RUN_ALL_TESTS();
	//vector test
	vector_test::vector_test();
	list_test::list_test();
	deque_test::deque_test();
	map_test::map_test();
	map_test::multimap_test();
	queue_test::queue_test();
	queue_test::priority_test();
	stack_test::stack_test();

#if defined(_MSC_VER) && defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif // check memory leaks

}
