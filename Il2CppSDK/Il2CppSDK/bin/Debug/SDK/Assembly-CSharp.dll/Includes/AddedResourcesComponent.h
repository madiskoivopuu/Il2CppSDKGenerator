#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddedResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddedResourcesComponent"));
	}

	template <typename R = Il2CppArray<ValueTuple2<Il2CppString*, int32_t>*>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

