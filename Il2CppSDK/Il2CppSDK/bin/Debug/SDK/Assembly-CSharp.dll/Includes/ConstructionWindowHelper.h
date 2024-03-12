#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConstructionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConstructionWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowConstruction(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15EB048))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T GetConstruction(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15EB0F0))(0, manager);
	}
	template <typename T = void> static T CloseConstruction(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15EB164))(0, manager, targetId);
	}

};

}
