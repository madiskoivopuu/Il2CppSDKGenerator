#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTargetComponent"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<Vec2>*& Position() {
		return *(Nullable1<Vec2>**)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(InteractTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x146A68C))(this, targetObject);
	}

};

