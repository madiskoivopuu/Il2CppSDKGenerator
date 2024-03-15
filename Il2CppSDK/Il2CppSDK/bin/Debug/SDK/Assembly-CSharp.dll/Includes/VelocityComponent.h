#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VelocityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VelocityComponent"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(VelocityComponent*, Il2CppObject*))(Il2CppBase() + 0x15C4B00))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4B9C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4BE0))(this, reader);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(VelocityComponent*, Il2CppObject*))(Il2CppBase() + 0x15C4C7C))(this, blueprintComponent);
	}

};

