#include <iostream>
extern "C"
{
#include <wrpc.h>
}


int main()
{
	/*wrpc::CSetterGetter obj;
	wrpc::CSetterGetter::Print(obj);

	obj.SetId(100);
	obj.SetName("upd");
	auto ptrInfo = std::make_shared<SInfo>();
	ptrInfo->value = "upd raw string value";
	obj.SetInfo(ptrInfo);

	std::cout << "updated: " << std::endl;
	wrpc::CSetterGetter::Print(obj);

	std::cout << "get value: " << GetValue(obj.GetInfo().get()) << std::endl;*/
	std::cout << "get \"Hello\": " << GetHello() << std::endl;

	return 0;
}
