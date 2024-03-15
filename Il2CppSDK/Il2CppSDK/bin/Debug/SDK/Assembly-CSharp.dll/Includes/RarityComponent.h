#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RarityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RarityComponent"));
	}

	template <typename R = Rarity*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RarityComponent*, Il2CppObject*))(Il2CppBase() + 0x1718BEC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718C80))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718DD4))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(RarityComponent*, Il2CppObject*))(Il2CppBase() + 0x1718E90))(this, blueprintComponent);
	}

};

