#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorSyncComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorSyncComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& BoolNames() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& IntNames() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<FloatParam>*> R& Floats() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AnimatorSyncComponent*, Il2CppObject*))(Il2CppBase() + 0x188DB14))(this, target);
	}

};

