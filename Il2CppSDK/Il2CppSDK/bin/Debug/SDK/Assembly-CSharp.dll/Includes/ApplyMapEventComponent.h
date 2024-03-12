#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMapEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMapEventComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyMapEventComponent*, uintptr_t))(Il2CppBase() + 0x1894700))(this, target);
	}

};

}
