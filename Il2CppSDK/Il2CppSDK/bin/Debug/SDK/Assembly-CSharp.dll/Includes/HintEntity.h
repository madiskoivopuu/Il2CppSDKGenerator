#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintEntity"));
	}


	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46958))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C469E0))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(HintEntity*, Il2CppString*))(Il2CppBase() + 0x1C469EC))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(HintEntity*, Il2CppString*))(Il2CppBase() + 0x1C46B00))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46C14))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46C20))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46CA8))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(HintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46CB4))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(HintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46DDC))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46F04))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46F10))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C46F98))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(HintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C46FA4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(HintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C470FC))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C47254))(this);
	}
	template <typename T = LocationsComponent*> T get_locations() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C47260))(this);
	}
	template <typename T = bool> T get_hasLocations() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C472E8))(this);
	}
	template <typename T = void> T AddLocations(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(HintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C472F4))(this, newList);
	}
	template <typename T = void> T ReplaceLocations(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(HintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C47408))(this, newList);
	}
	template <typename T = void> T RemoveLocations() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C4751C))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C47528))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C475B0))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(HintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C475BC))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(HintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C476D0))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(HintEntity*))(Il2CppBase() + 0x1C477E4))(this);
	}

};

