#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INoSaveableEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INoSaveableEntity"));
	}


	template <typename T = uintptr_t> T get_noSaveable() {
		return ((T (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasNoSaveable() {
		return ((T (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddNoSaveable(bool newSaveInLocation) {
		return ((T (*)(INoSaveableEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveInLocation);
	}
	template <typename T = void> T ReplaceNoSaveable(bool newSaveInLocation) {
		return ((T (*)(INoSaveableEntity*, bool))(Il2CppBase() + 0x0))(this, newSaveInLocation);
	}
	template <typename T = void> T RemoveNoSaveable() {
		return ((T (*)(INoSaveableEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
