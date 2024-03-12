#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountsInventoryWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountsInventoryWindow"));
	}


	template <typename T = uintptr_t> T get_MountsInventoryContainer() {
		return ((T (*)(IMountsInventoryWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(void* value) {
		return ((T (*)(IMountsInventoryWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
