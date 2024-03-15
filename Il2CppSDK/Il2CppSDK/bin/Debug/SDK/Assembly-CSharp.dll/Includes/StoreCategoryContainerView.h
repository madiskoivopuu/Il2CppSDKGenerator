#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryContainerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryContainerView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Init(StoreCategory* category) {
		return ((R (*)(StoreCategoryContainerView*, StoreCategory*))(Il2CppBase() + 0x141DEDC))(this, category);
	}
	template <typename R = Il2CppString*> R GetLocalizeCategoryKey(StoreCategory* category) {
		return ((R (*)(StoreCategoryContainerView*, StoreCategory*))(Il2CppBase() + 0x141DFCC))(this, category);
	}

};

