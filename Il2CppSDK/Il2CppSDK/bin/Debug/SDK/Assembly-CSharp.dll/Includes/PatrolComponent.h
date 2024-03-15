#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatrolComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatrolComponent"));
	}

	template <typename R = Il2CppString*> R& NextPoint() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& MagicName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PatrolComponent*, Il2CppObject*))(Il2CppBase() + 0x11E9CA4))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(PatrolComponent*, Il2CppObject*))(Il2CppBase() + 0x11E9D58))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PatrolComponent*, uintptr_t))(Il2CppBase() + 0x11E9E24))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PatrolComponent*, uintptr_t))(Il2CppBase() + 0x11E9EEC))(this, writer);
	}

};

