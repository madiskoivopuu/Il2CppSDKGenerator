#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerConditionComponent"));
	}

	template <typename T = void*> T& IsCyclic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& IsOBT() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = void*> T& IsQA() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ServerConditionComponent*, uintptr_t))(Il2CppBase() + 0x13666AC))(this, target);
	}

};

}
