#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildPlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildPlaceComponent"));
	}

	template <typename R = Fill*> R& Fill() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BuildPlaceComponent*, Il2CppObject*))(Il2CppBase() + 0x15A4EE0))(this, targetObject);
	}

};

