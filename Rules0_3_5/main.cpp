#include "Rule3.h"

int main()
{
	Rule3 obj1;
	obj1.setData(32); // 32

	Rule3 obj2 = obj1; // 32 -> obj2
	obj1.setData(10); // 10 -> obj1

	std::println("Obj1: {},Obj2: {}", *obj1.getData(), *obj2.getData());


	Rule3 obj3;
	obj3 = obj2; // 32 -> obj3
	obj2.setData(40); // 40 -> obj2
	std::println("Obj2: {},Obj3: {}", *obj2.getData(), *obj3.getData());


	return 0;
}
