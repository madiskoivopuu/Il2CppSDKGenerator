#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoActivateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoActivateComponent"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& QuestCompleted() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NotStarted() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AutoActivateComponent*, uintptr_t))(Il2CppBase() + 0x1A6234C))(this, target);
	}

};

}
