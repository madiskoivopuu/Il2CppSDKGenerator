#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInventoryIdEntity"));
	}


	template <typename T = MountInventoryIdComponent*> T get_mountInventoryId() {
		return ((T (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountInventoryId() {
		return ((T (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountInventoryId(int32_t newId) {
		return ((T (*)(IMountInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceMountInventoryId(int32_t newId) {
		return ((T (*)(IMountInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveMountInventoryId() {
		return ((T (*)(IMountInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

