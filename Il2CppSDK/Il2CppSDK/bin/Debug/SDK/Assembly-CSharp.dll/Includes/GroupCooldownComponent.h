#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GroupCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GroupCooldownComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Contains(Il2CppString* name) {
		return ((T (*)(GroupCooldownComponent*, Il2CppString*))(Il2CppBase() + 0x12E35DC))(this, name);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GroupCooldownComponent*, uintptr_t))(Il2CppBase() + 0x12E367C))(this, targetObject);
	}

};

}
