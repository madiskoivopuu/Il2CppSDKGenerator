#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArrowMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArrowMarkerEntity"));
	}


	template <typename R = ArrowMarkerComponent*> R get_arrowMarker() {
		return ((R (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArrowMarker() {
		return ((R (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(IArrowMarkerEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(IArrowMarkerEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R RemoveArrowMarker() {
		return ((R (*)(IArrowMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

