#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeResource"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

