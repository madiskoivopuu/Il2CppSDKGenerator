#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryScrolling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryScrolling"));
	}


	template <typename T = void> T add_OnBeginScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(void* value) {
		return ((T (*)(IInventoryScrolling*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
