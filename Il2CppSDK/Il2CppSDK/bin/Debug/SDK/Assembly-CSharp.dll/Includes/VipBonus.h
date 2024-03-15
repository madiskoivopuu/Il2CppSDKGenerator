#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonus"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Image() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = VipBonusType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsNew() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& IntValue() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& StringValue() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(VipBonus*, uintptr_t))(Il2CppBase() + 0x22A5D68))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(VipBonus*, uintptr_t))(Il2CppBase() + 0x22A5DF0))(this, reader);
	}

};

