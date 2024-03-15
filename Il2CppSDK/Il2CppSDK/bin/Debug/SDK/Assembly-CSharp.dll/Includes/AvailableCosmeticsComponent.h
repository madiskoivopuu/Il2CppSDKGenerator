#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AvailableCosmeticsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvailableCosmeticsComponent"));
	}

	 Il2CppDictionary<Il2CppString*, bool>*& Items() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AvailableCosmeticsComponent*, Il2CppObject*))(Il2CppBase() + 0x1A65C0C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AvailableCosmeticsComponent*, uintptr_t))(Il2CppBase() + 0x1A65D58))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AvailableCosmeticsComponent*, uintptr_t))(Il2CppBase() + 0x1A65EF8))(this, writer);
	}

};

