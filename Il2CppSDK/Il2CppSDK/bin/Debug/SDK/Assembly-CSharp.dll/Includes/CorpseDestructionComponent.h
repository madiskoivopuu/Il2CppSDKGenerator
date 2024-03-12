#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CorpseDestructionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CorpseDestructionComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CorpseDestructionComponent*, uintptr_t))(Il2CppBase() + 0x133E828))(this, targetObject);
	}
	template <typename T = float> T GetTime(int32_t level) {
		return ((T (*)(CorpseDestructionComponent*, int32_t))(Il2CppBase() + 0x133E8C0))(this, level);
	}

};

}
