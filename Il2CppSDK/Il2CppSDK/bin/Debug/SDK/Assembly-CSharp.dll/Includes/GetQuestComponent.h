#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetQuestComponent"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GetQuestComponent*, uintptr_t))(Il2CppBase() + 0x1770FBC))(this, target);
	}

};

}
