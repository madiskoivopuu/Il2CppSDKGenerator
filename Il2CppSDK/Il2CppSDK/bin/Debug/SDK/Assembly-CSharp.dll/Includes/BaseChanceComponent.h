#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseChanceComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseChanceComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC820))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC8D0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseChanceComponent*, uintptr_t))(Il2CppBase() + 0xFBC99C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(BaseChanceComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC9F0))(this, blueprintComponent);
	}
	template <typename R = bool> R IsNamed() {
		return ((R (*)(BaseChanceComponent*))(Il2CppBase() + 0xFBCAD8))(this);
	}

};

