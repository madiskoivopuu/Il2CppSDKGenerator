#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicSaveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicSaveEntity"));
	}


	template <typename R = MagicSaveComponent*> R get_magicSave() {
		return ((R (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMagicSave() {
		return ((R (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(IMagicSaveEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x0))(this, newItems, newRiding);
	}
	template <typename R = void> R ReplaceMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(IMagicSaveEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x0))(this, newItems, newRiding);
	}
	template <typename R = void> R RemoveMagicSave() {
		return ((R (*)(IMagicSaveEntity*))(Il2CppBase() + 0x0))(this);
	}

};

