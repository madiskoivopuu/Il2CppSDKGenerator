#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrabViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrabViewComponent"));
	}

	template <typename T = Il2CppString*> T& AnimatorKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GrabViewComponent*, uintptr_t))(Il2CppBase() + 0x12E1FA8))(this, targetObject);
	}

};

}
