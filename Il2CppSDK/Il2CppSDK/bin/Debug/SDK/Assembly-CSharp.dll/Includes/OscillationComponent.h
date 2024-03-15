#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OscillationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OscillationComponent"));
	}

	template <typename R = float> R& Step() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Array() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<float>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OscillationComponent*, Il2CppObject*))(Il2CppBase() + 0x11E4E74))(this, target);
	}

};

