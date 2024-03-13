#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArrowMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArrowMarkerEntity"));
	}


	template <typename T = ArrowMarkerComponent*> T get_arrowMarker() {
		return ((T (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArrowMarker() {
		return ((T (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(IArrowMarkerEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(IArrowMarkerEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T RemoveArrowMarker() {
		return ((T (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

