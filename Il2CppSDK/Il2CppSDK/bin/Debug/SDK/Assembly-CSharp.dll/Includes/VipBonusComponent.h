#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusComponent"));
	}

	template <typename R = VipBonusType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(VipBonusComponent*, Il2CppObject*))(Il2CppBase() + 0x15CDA70))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(VipBonusComponent*, uintptr_t))(Il2CppBase() + 0x15CDB1C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(VipBonusComponent*, uintptr_t))(Il2CppBase() + 0x15CDBF0))(this, writer);
	}

};

