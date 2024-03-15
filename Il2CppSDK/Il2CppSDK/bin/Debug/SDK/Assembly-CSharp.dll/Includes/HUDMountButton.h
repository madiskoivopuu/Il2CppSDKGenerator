#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDInventoryButton.h" 

class HUDMountButton : public HUDInventoryButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMountButton"));
	}

	template <typename R = uintptr_t> R& MountMark() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& DismountMark() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}

	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDMountButton*, float))(Il2CppBase() + 0x1277BFC))(this, deltaTime);
	}

};

