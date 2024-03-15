#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIconEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIconEntity"));
	}


	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(IIconEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(IIconEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(IIconEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(IIconEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(IIconEntity*))(Il2CppBase() + 0x0))(this);
	}

};

