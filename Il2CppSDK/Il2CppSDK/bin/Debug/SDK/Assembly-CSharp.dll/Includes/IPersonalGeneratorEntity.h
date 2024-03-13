#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalGeneratorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalGeneratorEntity"));
	}


	template <typename T = PersonalGeneratorComponent*> T get_personalGenerator() {
		return ((T (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPersonalGenerator() {
		return ((T (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(IPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(IPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalGenerator() {
		return ((T (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

