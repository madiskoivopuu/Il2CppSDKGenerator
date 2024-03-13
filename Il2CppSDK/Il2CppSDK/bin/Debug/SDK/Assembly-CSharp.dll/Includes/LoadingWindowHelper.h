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
	template <typename T = UnityBlueprintLoader*> static T& _unityBlueprintLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = HintDataContext*> static T& _hintContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = LoadingDataContext*> static T& _loadingContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = UnityBlueprintLoader*> static T get_UnityBlueprintLoader() {
		return ((T (*)(void *))(Il2CppBase() + 0x14348B4))(0);
	}
	template <typename T = HintDataContext*> static T get_HintContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x143494C))(0);
	}
	template <typename T = LoadingDataContext*> static T get_LoadingContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1434B00))(0);
	}
	template <typename T = LoadingWindow*> static T ShowIfNeedLoading(UIWindowsManager* manager, GameEntity* point) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x1434CB0))(0, manager, point);
	}
	template <typename T = LoadingWindow*> static T ShowIfNeedLoading_1(UIWindowsManager* manager, Il2CppString* locationBlueprint, DescriptionComponent* descriptionComponent) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, DescriptionComponent*))(Il2CppBase() + 0x1434D74))(0, manager, locationBlueprint, descriptionComponent);
	}
	template <typename T = LoadingWindow*> static T ShowLoading(UIWindowsManager* manager, GameEntity* point) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x1435534))(0, manager, point);
	}
	template <typename T = LoadingWindow*> static T ShowLoading_1(UIWindowsManager* manager, bool isCyclic, Il2CppString* locationBlueprint, DescriptionComponent* descriptionComponent, bool showLore, Nullable1ValueTuple2int64_t, int64_t>*>* timer) {
		return ((T (*)(void *, UIWindowsManager*, bool, Il2CppString*, DescriptionComponent*, bool, Nullable1ValueTuple2int64_t, int64_t>*>*))(Il2CppBase() + 0x1435174))(0, manager, isCyclic, locationBlueprint, descriptionComponent, showLore, timer);
	}
	template <typename T = void> static T CloseLoading(UIWindowsManager* manager, bool closeBackground) {
		return ((T (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x143588C))(0, manager, closeBackground);
	}

};

