#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatusBarViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatusBarViewEntity"));
	}


	template <typename T = uintptr_t> T get_statusBarView() {
		return ((T (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStatusBarView() {
		return ((T (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStatusBarView(uintptr_t newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(IStatusBarViewEntity*, uintptr_t, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T ReplaceStatusBarView(uintptr_t newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(IStatusBarViewEntity*, uintptr_t, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T RemoveStatusBarView() {
		return ((T (*)(IStatusBarViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
