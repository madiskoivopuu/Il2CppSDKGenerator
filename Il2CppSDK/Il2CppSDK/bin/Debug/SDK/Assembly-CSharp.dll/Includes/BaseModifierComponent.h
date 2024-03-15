#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseModifierComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ModifierGroup*> R& Group() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(BaseModifierComponent*))(Il2CppBase() + 0x166F51C))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(BaseModifierComponent*))(Il2CppBase() + 0x166F524))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseModifierComponent*, Il2CppObject*))(Il2CppBase() + 0x166F52C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseModifierComponent*, uintptr_t))(Il2CppBase() + 0x166F5C8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseModifierComponent*, uintptr_t))(Il2CppBase() + 0x166F670))(this, writer);
	}

};

