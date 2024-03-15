#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LevelComponent*, uintptr_t))(Il2CppBase() + 0x142B758))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LevelComponent*, uintptr_t))(Il2CppBase() + 0x142B7C4))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LevelComponent*, Il2CppObject*))(Il2CppBase() + 0x142B7E4))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(LevelComponent*, Il2CppObject*))(Il2CppBase() + 0x142B878))(this, blueprintComponent);
	}

};

