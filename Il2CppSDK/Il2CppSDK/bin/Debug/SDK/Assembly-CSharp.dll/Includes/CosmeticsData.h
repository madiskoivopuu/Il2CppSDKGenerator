#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CosmeticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CosmeticsData"));
	}

	template <typename R = Gender*> R& Gender() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<int32_t, Il2CppString*>*& Slots() {
		return *(Il2CppDictionary<int32_t, Il2CppString*>**)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CosmeticsData*, uintptr_t))(Il2CppBase() + 0x133F560))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CosmeticsData*, uintptr_t))(Il2CppBase() + 0x133F714))(this, reader);
	}

};

