#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INoSaveableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INoSaveableEntity"));
	}


	template <typename R = NoSaveableComponent*> R get_noSaveable() {
		return ((R (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasNoSaveable() {
		return ((R (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddNoSaveable(bool newSaveInLocation) {
		return ((R (*)(INoSaveableEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveInLocation);
	}
	template <typename R = void> R ReplaceNoSaveable(bool newSaveInLocation) {
		return ((R (*)(INoSaveableEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveInLocation);
	}
	template <typename R = void> R RemoveNoSaveable() {
		return ((R (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}

};

