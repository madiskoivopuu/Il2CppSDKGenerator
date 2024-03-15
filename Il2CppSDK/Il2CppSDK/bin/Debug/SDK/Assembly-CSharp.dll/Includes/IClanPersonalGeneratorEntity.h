#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanPersonalGeneratorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanPersonalGeneratorEntity"));
	}


	template <typename R = ClanPersonalGeneratorComponent*> R get_clanPersonalGenerator() {
		return ((R (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClanPersonalGenerator() {
		return ((R (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(IClanPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(IClanPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemoveClanPersonalGenerator() {
		return ((R (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

