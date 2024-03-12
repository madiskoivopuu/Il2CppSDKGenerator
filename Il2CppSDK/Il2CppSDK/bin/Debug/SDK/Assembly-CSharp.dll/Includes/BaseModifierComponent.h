#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseModifierComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Group() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(BaseModifierComponent*))(Il2CppBase() + 0x166F51C))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(BaseModifierComponent*))(Il2CppBase() + 0x166F524))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BaseModifierComponent*, uintptr_t))(Il2CppBase() + 0x166F52C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseModifierComponent*, uintptr_t))(Il2CppBase() + 0x166F5C8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseModifierComponent*, uintptr_t))(Il2CppBase() + 0x166F670))(this, writer);
	}

};

}
