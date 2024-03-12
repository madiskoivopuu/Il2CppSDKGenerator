#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebuffComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebuffComponent"));
	}

	template <typename T = bool> T& NoAggro() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DebuffComponent*, uintptr_t))(Il2CppBase() + 0xEB5D90))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DebuffComponent*, uintptr_t))(Il2CppBase() + 0xEB5E24))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DebuffComponent*, uintptr_t))(Il2CppBase() + 0xEB5E90))(this, writer);
	}

};

}
