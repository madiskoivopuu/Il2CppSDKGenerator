#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerConditionComponent"));
	}

	 Nullable1bool>*& IsCyclic() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}
	 Nullable1bool>*& IsOBT() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x12);
	}
	 Nullable1bool>*& IsQA() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ServerConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x13666AC))(this, target);
	}

};

