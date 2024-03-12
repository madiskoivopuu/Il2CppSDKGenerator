#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonus"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Image() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsNew() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& IntValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& StringValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(VipBonus*, uintptr_t))(Il2CppBase() + 0x22A5D68))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(VipBonus*, uintptr_t))(Il2CppBase() + 0x22A5DF0))(this, reader);
	}

};

}
