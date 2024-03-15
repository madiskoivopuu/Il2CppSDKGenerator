#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ItemComponent*, Il2CppObject*))(Il2CppBase() + 0x10E6398))(this, targetObject);
	}

};

