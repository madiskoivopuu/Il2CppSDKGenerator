#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicSaveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicSaveEntity"));
	}


	template <typename T = MagicSaveComponent*> T get_magicSave() {
		return ((T (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMagicSave() {
		return ((T (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(IMagicSaveEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newItems, newRiding);
	}
	template <typename T = void> T ReplaceMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(IMagicSaveEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newItems, newRiding);
	}
	template <typename T = void> T RemoveMagicSave() {
		return ((T (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

