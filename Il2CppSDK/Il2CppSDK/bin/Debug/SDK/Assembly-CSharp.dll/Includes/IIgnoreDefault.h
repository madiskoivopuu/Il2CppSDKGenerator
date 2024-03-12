#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreDefault
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreDefault"));
	}


	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(IIgnoreDefault*, uintptr_t))(Il2CppBase() + 0x0))(this, blueprintComponent);
	}

};

}
