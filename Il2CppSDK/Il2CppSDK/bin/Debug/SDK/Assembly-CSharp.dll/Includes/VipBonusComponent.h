#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(VipBonusComponent*, uintptr_t))(Il2CppBase() + 0x15CDA70))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(VipBonusComponent*, uintptr_t))(Il2CppBase() + 0x15CDB1C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(VipBonusComponent*, uintptr_t))(Il2CppBase() + 0x15CDBF0))(this, writer);
	}

};

}
