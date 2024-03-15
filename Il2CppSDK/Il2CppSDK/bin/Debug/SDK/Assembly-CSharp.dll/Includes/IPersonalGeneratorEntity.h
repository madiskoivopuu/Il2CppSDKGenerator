#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalGeneratorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalGeneratorEntity"));
	}


	template <typename R = PersonalGeneratorComponent*> R get_personalGenerator() {
		return ((R (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPersonalGenerator() {
		return ((R (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(IPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(IPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalGenerator() {
		return ((R (*)(IPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

