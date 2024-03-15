#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatusBarViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatusBarViewEntity"));
	}


	template <typename R = StatusBarViewComponent*> R get_statusBarView() {
		return ((R (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStatusBarView() {
		return ((R (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStatusBarView(StatusNameShow newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(IStatusBarViewEntity*, StatusNameShow, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R ReplaceStatusBarView(StatusNameShow newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(IStatusBarViewEntity*, StatusNameShow, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R RemoveStatusBarView() {
		return ((R (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

