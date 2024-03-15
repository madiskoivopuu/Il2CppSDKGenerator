#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInventoryIdEntity"));
	}


	template <typename R = MountInventoryIdComponent*> R get_mountInventoryId() {
		return ((R (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountInventoryId() {
		return ((R (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountInventoryId(int32_t newId) {
		return ((R (*)(IMountInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceMountInventoryId(int32_t newId) {
		return ((R (*)(IMountInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveMountInventoryId() {
		return ((R (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

