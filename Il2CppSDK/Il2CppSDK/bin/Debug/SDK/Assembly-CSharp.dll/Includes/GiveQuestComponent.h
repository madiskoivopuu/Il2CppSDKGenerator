#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GiveQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiveQuestComponent"));
	}

	template <typename T = bool> T& DontStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GiveQuestComponent*, uintptr_t))(Il2CppBase() + 0x17724FC))(this, target);
	}

};

}
