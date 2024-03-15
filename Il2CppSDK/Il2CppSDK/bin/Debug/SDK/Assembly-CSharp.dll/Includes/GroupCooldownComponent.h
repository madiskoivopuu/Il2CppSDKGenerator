#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GroupCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GroupCooldownComponent"));
	}

	template <typename R = Il2CppArray<NameFloat*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Contains(Il2CppString* name) {
		return ((R (*)(GroupCooldownComponent*, Il2CppString*))(Il2CppBase() + 0x12E35DC))(this, name);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GroupCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x12E367C))(this, targetObject);
	}

};

