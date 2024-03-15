#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalKeyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalKeyEntity"));
	}


	template <typename R = PersonalKeyComponent*> R get_personalKey() {
		return ((R (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPersonalKey() {
		return ((R (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(IPersonalKeyEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(IPersonalKeyEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalKey() {
		return ((R (*)(IPersonalKeyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

