#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmunityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmunityComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Tags() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ImmunityComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DCD0))(this, target);
	}
	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(ImmunityComponent*))(Il2CppBase() + 0x1E3DD78))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(ImmunityComponent*))(Il2CppBase() + 0x1E3DD80))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ImmunityComponent*, uintptr_t))(Il2CppBase() + 0x1E3DD88))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ImmunityComponent*, uintptr_t))(Il2CppBase() + 0x1E3DE2C))(this, writer);
	}

};

