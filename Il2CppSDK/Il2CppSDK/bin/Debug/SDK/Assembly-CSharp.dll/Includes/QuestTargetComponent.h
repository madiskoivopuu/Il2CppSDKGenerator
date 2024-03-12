#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTargetComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(QuestTargetComponent*, uintptr_t))(Il2CppBase() + 0x170596C))(this, target);
	}

};

}
