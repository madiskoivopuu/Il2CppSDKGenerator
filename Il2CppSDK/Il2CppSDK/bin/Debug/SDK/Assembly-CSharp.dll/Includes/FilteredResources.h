#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilteredResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FilteredResources"));
	}

	template <typename T = ItemFilter*> T& Filter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Coef() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

