#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonDifficultyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonDifficultyComponent"));
	}

	template <typename T = Il2CppString*> T& DefaultDescription() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DungeonDifficultyComponent*, uintptr_t))(Il2CppBase() + 0x13074AC))(this, target);
	}

};

}
