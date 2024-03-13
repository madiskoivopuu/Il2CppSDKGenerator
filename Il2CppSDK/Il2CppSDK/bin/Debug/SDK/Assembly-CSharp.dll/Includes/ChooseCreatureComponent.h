#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChooseCreatureComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChooseCreatureComponent"));
	}

	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ForceSpawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ChooseCreatureComponent*, Il2CppObject*))(Il2CppBase() + 0x1746D14))(this, targetObject);
	}

};

