#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInventoryContentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInventoryContentEntity"));
	}


	template <typename T = uintptr_t> T get_mountInventoryContent() {
		return ((T (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountInventoryContent() {
		return ((T (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IMountInventoryContentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename T = void> T ReplaceMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IMountInventoryContentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename T = void> T RemoveMountInventoryContent() {
		return ((T (*)(IMountInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
