#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkillEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkillEventHandler"));
	}


	template <typename T = void> T OnHold(uintptr_t item) {
		return ((T (*)(ISkillEventHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(uintptr_t item) {
		return ((T (*)(ISkillEventHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(ISkillEventHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}

};

}
