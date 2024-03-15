#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindowHelper"));
	}

	template <typename R = float> static R& ChanceOfSpecificHint() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = UnityBlueprintLoader*> static R& _unityBlueprintLoader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = HintDataContext*> static R& _hintContext() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = LoadingDataContext*> static R& _loadingContext() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = UnityBlueprintLoader*> static R get_UnityBlueprintLoader() {
		return ((R (*)(void *))(Il2CppBase() + 0x14348B4))(0);
	}
	template <typename R = HintDataContext*> static R get_HintContext() {
		return ((R (*)(void *))(Il2CppBase() + 0x143494C))(0);
	}
	template <typename R = LoadingDataContext*> static R get_LoadingContext() {
		return ((R (*)(void *))(Il2CppBase() + 0x1434B00))(0);
	}
	template <typename R = LoadingWindow*> static R ShowIfNeedLoading(UIWindowsManager* manager, GameEntity* point) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x1434CB0))(0, manager, point);
	}
	template <typename R = LoadingWindow*> static R ShowIfNeedLoading_1(UIWindowsManager* manager, Il2CppString* locationBlueprint, DescriptionComponent* descriptionComponent) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, DescriptionComponent*))(Il2CppBase() + 0x1434D74))(0, manager, locationBlueprint, descriptionComponent);
	}
	template <typename R = LoadingWindow*> static R ShowLoading(UIWindowsManager* manager, GameEntity* point) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x1435534))(0, manager, point);
	}
	template <typename R = LoadingWindow*> static R ShowLoading_1(UIWindowsManager* manager, bool isCyclic, Il2CppString* locationBlueprint, DescriptionComponent* descriptionComponent, bool showLore, Nullable1ValueTuple2int64_t, int64_t>*>* timer) {
		return ((R (*)(void *, UIWindowsManager*, bool, Il2CppString*, DescriptionComponent*, bool, Nullable1ValueTuple2int64_t, int64_t>*>*))(Il2CppBase() + 0x1435174))(0, manager, isCyclic, locationBlueprint, descriptionComponent, showLore, timer);
	}
	template <typename R = void> static R CloseLoading(UIWindowsManager* manager, bool closeBackground) {
		return ((R (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x143588C))(0, manager, closeBackground);
	}

};

