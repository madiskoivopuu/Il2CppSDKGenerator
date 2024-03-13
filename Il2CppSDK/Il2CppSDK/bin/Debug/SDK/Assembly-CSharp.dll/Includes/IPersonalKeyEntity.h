#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalKeyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalKeyEntity"));
	}


	template <typename T = PersonalKeyComponent*> T get_personalKey() {
		return ((T (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPersonalKey() {
		return ((T (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(IPersonalKeyEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(IPersonalKeyEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalKey() {
		return ((T (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

