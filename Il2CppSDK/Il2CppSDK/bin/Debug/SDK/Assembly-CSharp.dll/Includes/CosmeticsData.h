#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CosmeticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CosmeticsData"));
	}

	template <typename T = uintptr_t> T& Gender() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CosmeticsData*, uintptr_t))(Il2CppBase() + 0x133F560))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CosmeticsData*, uintptr_t))(Il2CppBase() + 0x133F714))(this, reader);
	}

};

}
