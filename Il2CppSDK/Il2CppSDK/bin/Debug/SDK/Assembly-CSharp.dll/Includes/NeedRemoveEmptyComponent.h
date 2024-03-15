#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NeedRemoveEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NeedRemoveEmptyComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& SpawnObject() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(NeedRemoveEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x13A9540))(this, target);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(NeedRemoveEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x13A95E0))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(NeedRemoveEmptyComponent*, uintptr_t))(Il2CppBase() + 0x13A96AC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(NeedRemoveEmptyComponent*, uintptr_t))(Il2CppBase() + 0x13A9814))(this, writer);
	}

};

