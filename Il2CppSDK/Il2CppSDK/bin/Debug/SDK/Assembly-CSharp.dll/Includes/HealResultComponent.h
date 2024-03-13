#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealResultComponent"));
	}

	template <typename T = HealResultParams*> T& Params() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(HealResultComponent*, uintptr_t))(Il2CppBase() + 0x128AAE4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(HealResultComponent*, uintptr_t))(Il2CppBase() + 0x128AC54))(this, writer);
	}

};

