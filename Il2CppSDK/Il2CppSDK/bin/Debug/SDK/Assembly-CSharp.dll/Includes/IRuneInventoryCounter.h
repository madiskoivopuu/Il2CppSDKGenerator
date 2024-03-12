#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryCounter"));
	}


	template <typename T = void> T InitClassRuneInventories(uintptr_t avatar, uintptr_t account, uintptr_t classTypeToReinit) {
		return ((T (*)(IRuneInventoryCounter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, avatar, account, classTypeToReinit);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T get_ClassRuneInventories() {
		return ((T (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetClassRunesInventoryCount(uintptr_t playerClassType) {
		return ((T (*)(IRuneInventoryCounter*, uintptr_t))(Il2CppBase() + 0x0))(this, playerClassType);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T get_ClassRunesInventoryCount() {
		return ((T (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}

};

}
