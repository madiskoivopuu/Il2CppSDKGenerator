#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateUniqueInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateUniqueInventoryComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& RandomGroups() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CreateUniqueInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCDAEC))(this, targetObject);
	}

};

