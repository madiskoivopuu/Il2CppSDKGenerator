#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddedResourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddedResourcesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

