#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntCountComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(IntCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1468F68))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(IntCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1468FFC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IntCountComponent*, uintptr_t))(Il2CppBase() + 0x1469098))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IntCountComponent*, uintptr_t))(Il2CppBase() + 0x1469104))(this, writer);
	}

};

