#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDInventoryButton" 

class HUDMountButton: HUDInventoryButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMountButton"));
	}

	template <typename T = uintptr_t> T& MountMark() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& DismountMark() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDMountButton*, float))(Il2CppBase() + 0x1277BFC))(this, deltaTime);
	}

};

}
