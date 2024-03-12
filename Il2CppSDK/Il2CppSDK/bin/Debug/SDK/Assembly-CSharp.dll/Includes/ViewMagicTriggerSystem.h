#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewMagicTriggerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewMagicTriggerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _triggers() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ViewMagicTriggerSystem*))(Il2CppBase() + 0x15CC4AC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ViewMagicTriggerSystem*))(Il2CppBase() + 0x15CC528))(this);
	}

};

}
