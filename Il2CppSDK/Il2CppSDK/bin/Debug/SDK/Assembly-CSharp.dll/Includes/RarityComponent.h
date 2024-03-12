#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RarityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RarityComponent"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718BEC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718C80))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718DD4))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(RarityComponent*, uintptr_t))(Il2CppBase() + 0x1718E90))(this, blueprintComponent);
	}

};

}
