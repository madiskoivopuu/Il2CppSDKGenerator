#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingEntity"));
	}


	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1431BC0))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1431C48))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(LoadingEntity*, Il2CppString*))(Il2CppBase() + 0x1431C54))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(LoadingEntity*, Il2CppString*))(Il2CppBase() + 0x1431D68))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1431E7C))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1431E88))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1431F10))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(LoadingEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1431F1C))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(LoadingEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1432044))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x143216C))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1432178))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1432200))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(LoadingEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x143220C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(LoadingEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1432364))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x14324BC))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x14324C8))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1432550))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LoadingEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x143255C))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LoadingEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1432670))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(LoadingEntity*))(Il2CppBase() + 0x1432784))(this);
	}

};

