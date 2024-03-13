#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvailableCosmeticsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvailableCosmeticsComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AvailableCosmeticsComponent*, Il2CppObject*))(Il2CppBase() + 0x1A65C0C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AvailableCosmeticsComponent*, uintptr_t))(Il2CppBase() + 0x1A65D58))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AvailableCosmeticsComponent*, uintptr_t))(Il2CppBase() + 0x1A65EF8))(this, writer);
	}

};

