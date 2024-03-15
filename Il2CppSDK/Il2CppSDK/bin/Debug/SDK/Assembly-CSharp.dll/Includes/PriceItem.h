#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceItem"));
	}

	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

