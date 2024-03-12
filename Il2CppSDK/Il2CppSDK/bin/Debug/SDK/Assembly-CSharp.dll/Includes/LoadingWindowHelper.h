#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindowHelper"));
	}

	template <typename T = float> static T& ChanceOfSpecificHint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _unityBlueprintLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _hintContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _loadingContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_UnityBlueprintLoader() {
		return ((T (*)(void *))(Il2CppBase() + 0x14348B4))(0);
	}
	template <typename T = uintptr_t> static T get_HintContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x143494C))(0);
	}
	template <typename T = uintptr_t> static T get_LoadingContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1434B00))(0);
	}
	template <typename T = uintptr_t> static T ShowIfNeedLoading(uintptr_t manager, uintptr_t point) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1434CB0))(0, manager, point);
	}
	template <typename T = uintptr_t> static T ShowIfNeedLoading_1(uintptr_t manager, Il2CppString* locationBlueprint, uintptr_t descriptionComponent) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1434D74))(0, manager, locationBlueprint, descriptionComponent);
	}
	template <typename T = uintptr_t> static T ShowLoading(uintptr_t manager, uintptr_t point) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1435534))(0, manager, point);
	}
	template <typename T = uintptr_t> static T ShowLoading_1(uintptr_t manager, bool isCyclic, Il2CppString* locationBlueprint, uintptr_t descriptionComponent, bool showLore, void* timer) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppString*, uintptr_t, bool, void*))(Il2CppBase() + 0x1435174))(0, manager, isCyclic, locationBlueprint, descriptionComponent, showLore, timer);
	}
	template <typename T = void> static T CloseLoading(uintptr_t manager, bool closeBackground) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x143588C))(0, manager, closeBackground);
	}

};

}
