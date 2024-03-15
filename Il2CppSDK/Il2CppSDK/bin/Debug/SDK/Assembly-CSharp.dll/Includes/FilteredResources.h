#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilteredResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FilteredResources"));
	}

	template <typename R = ItemFilter*> R& Filter() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Coef() {
		return *(R*)((uintptr_t)this + 0x24);
	}


};

