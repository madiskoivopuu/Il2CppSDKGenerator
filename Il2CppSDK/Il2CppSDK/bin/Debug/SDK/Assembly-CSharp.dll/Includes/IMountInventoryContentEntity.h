#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInventoryContentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInventoryContentEntity"));
	}


	template <typename R = MountInventoryContentComponent*> R get_mountInventoryContent() {
		return ((R (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountInventoryContent() {
		return ((R (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(IMountInventoryContentEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename R = void> R ReplaceMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(IMountInventoryContentEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename R = void> R RemoveMountInventoryContent() {
		return ((R (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

