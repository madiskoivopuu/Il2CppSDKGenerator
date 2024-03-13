#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTargetComponent"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1Vec2*>*> T& Position() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(InteractTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x146A68C))(this, targetObject);
	}

};

