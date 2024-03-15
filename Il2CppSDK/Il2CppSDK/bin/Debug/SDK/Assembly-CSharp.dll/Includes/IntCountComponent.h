#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntCountComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(IntCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1468F68))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(IntCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1468FFC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IntCountComponent*, uintptr_t))(Il2CppBase() + 0x1469098))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IntCountComponent*, uintptr_t))(Il2CppBase() + 0x1469104))(this, writer);
	}

};

