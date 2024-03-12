#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildQuestComponent"));
	}

	template <typename T = Il2CppString*> T& Template() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BuildQuestComponent*, uintptr_t))(Il2CppBase() + 0x15A4F7C))(this, target);
	}

};

}
