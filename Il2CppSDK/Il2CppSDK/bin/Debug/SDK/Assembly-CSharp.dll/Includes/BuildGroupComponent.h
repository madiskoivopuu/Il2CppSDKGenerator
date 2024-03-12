#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildGroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildGroupComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BuildGroupComponent*, uintptr_t))(Il2CppBase() + 0x15A44F8))(this, targetObject);
	}
	template <typename T = int32_t> T GetSlotIndex(Il2CppString* name) {
		return ((T (*)(BuildGroupComponent*, Il2CppString*))(Il2CppBase() + 0x15A4574))(this, name);
	}

};

}
