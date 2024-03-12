#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseChanceComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC820))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC8D0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC99C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC9F0))(this, blueprintComponent);
	}
	template <typename T = bool> T IsNamed() {
		return ((T (*)(BaseChanceComponent*))(Il2CppBase() + 0xFBCAD8))(this);
	}

};

}
