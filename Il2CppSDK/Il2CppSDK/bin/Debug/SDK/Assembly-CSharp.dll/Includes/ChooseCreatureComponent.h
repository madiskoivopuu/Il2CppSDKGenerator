#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChooseCreatureComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChooseCreatureComponent"));
	}

	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ForceSpawn() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ChooseCreatureComponent*, Il2CppObject*))(Il2CppBase() + 0x1746D14))(this, targetObject);
	}

};

