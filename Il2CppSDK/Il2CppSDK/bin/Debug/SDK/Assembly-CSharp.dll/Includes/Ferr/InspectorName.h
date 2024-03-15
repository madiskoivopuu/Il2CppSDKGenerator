#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class InspectorName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "InspectorName"));
	}

	template <typename R = Il2CppString*> R& mName() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

}
