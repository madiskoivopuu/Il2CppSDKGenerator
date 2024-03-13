#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LevelComponent*, uintptr_t))(Il2CppBase() + 0x142B758))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LevelComponent*, uintptr_t))(Il2CppBase() + 0x142B7C4))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LevelComponent*, Il2CppObject*))(Il2CppBase() + 0x142B7E4))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(LevelComponent*, Il2CppObject*))(Il2CppBase() + 0x142B878))(this, blueprintComponent);
	}

};

