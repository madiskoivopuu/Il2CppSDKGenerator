#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintEntity"));
	}


	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46958))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C469E0))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(HintEntity*, Il2CppString*))(Il2CppBase() + 0x1C469EC))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(HintEntity*, Il2CppString*))(Il2CppBase() + 0x1C46B00))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46C14))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46C20))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46CA8))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(HintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46CB4))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(HintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46DDC))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46F04))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46F10))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C46F98))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(HintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46FA4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(HintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C470FC))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C47254))(this);
	}
	template <typename R = LocationsComponent*> R get_locations() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C47260))(this);
	}
	template <typename R = bool> R get_hasLocations() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C472E8))(this);
	}
	template <typename R = void> R AddLocations(Il2CppArray<Il2CppString*>* newList) {
		return ((R (*)(HintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C472F4))(this, newList);
	}
	template <typename R = void> R ReplaceLocations(Il2CppArray<Il2CppString*>* newList) {
		return ((R (*)(HintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C47408))(this, newList);
	}
	template <typename R = void> R RemoveLocations() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C4751C))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C47528))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C475B0))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(HintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C475BC))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(HintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1C476D0))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(HintEntity*))(Il2CppBase() + 0x1C477E4))(this);
	}

};

