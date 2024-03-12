#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryContainerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryContainerView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Init(uintptr_t category) {
		return ((T (*)(StoreCategoryContainerView*, uintptr_t))(Il2CppBase() + 0x141DEDC))(this, category);
	}
	template <typename T = Il2CppString*> T GetLocalizeCategoryKey(uintptr_t category) {
		return ((T (*)(StoreCategoryContainerView*, uintptr_t))(Il2CppBase() + 0x141DFCC))(this, category);
	}

};

}
