#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingEntity"));
	}


	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1431BC0))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1431C48))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(LoadingEntity*, Il2CppString*))(Il2CppBase() + 0x1431C54))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(LoadingEntity*, Il2CppString*))(Il2CppBase() + 0x1431D68))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1431E7C))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1431E88))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1431F10))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(LoadingEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1431F1C))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(LoadingEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1432044))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x143216C))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1432178))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1432200))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(LoadingEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143220C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(LoadingEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1432364))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x14324BC))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x14324C8))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1432550))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LoadingEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x143255C))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LoadingEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1432670))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(LoadingEntity*))(Il2CppBase() + 0x1432784))(this);
	}

};

