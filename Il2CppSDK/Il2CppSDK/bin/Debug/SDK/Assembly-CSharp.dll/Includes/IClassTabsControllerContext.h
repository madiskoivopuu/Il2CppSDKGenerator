#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClassTabsControllerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClassTabsControllerContext"));
	}


	template <typename T = int32_t> T get_ActiveTabIndex() {
		return ((T (*)(IClassTabsControllerContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ActiveTabIndex(int32_t value) {
		return ((T (*)(IClassTabsControllerContext*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T ShowClass(uintptr_t classItem, bool isLocked) {
		return ((T (*)(IClassTabsControllerContext*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, classItem, isLocked);
	}

};

}
