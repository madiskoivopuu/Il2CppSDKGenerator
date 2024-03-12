#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanPersonalGeneratorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanPersonalGeneratorEntity"));
	}


	template <typename T = uintptr_t> T get_clanPersonalGenerator() {
		return ((T (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClanPersonalGenerator() {
		return ((T (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(IClanPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(IClanPersonalGeneratorEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemoveClanPersonalGenerator() {
		return ((T (*)(IClanPersonalGeneratorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
