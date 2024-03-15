#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeResource"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

