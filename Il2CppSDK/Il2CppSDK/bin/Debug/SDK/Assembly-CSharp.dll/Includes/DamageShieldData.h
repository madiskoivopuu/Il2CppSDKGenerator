#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageShieldData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageShieldData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DamageShieldData*, uintptr_t))(Il2CppBase() + 0x164B87C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DamageShieldData*, uintptr_t))(Il2CppBase() + 0x164B8D0))(this, reader);
	}

};

