#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OscillationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OscillationComponent"));
	}

	template <typename T = float> T& Step() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Array() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OscillationComponent*, Il2CppObject*))(Il2CppBase() + 0x11E4E74))(this, target);
	}

};

