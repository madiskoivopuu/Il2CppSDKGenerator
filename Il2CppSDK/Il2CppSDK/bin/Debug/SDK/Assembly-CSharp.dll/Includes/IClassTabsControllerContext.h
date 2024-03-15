#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClassTabsControllerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClassTabsControllerContext"));
	}


	template <typename R = int32_t> R get_ActiveTabIndex() {
		return ((R (*)(IClassTabsControllerContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_ActiveTabIndex(int32_t value) {
		return ((R (*)(IClassTabsControllerContext*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R ShowClass(ItemEntity* classItem, bool isLocked) {
		return ((R (*)(IClassTabsControllerContext*, ItemEntity*, bool))(Il2CppBase() + 0x0))(this, classItem, isLocked);
	}

};

