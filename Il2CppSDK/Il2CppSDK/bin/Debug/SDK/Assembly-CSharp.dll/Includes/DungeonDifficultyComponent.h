#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonDifficultyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonDifficultyComponent"));
	}

	template <typename R = Il2CppString*> R& DefaultDescription() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Difficulty*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DungeonDifficultyComponent*, Il2CppObject*))(Il2CppBase() + 0x13074AC))(this, target);
	}

};

