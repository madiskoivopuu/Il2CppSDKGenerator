#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyCoodownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyCoodownComponent"));
	}

	template <typename R = Il2CppArray<NameFloat>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Tags() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseApplyCoodownComponent*, Il2CppObject*))(Il2CppBase() + 0xFBBE9C))(this, target);
	}

};

