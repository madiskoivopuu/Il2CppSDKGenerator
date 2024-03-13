#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemCooldown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldown"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

