#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToggleMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToggleMonoBehaviour"));
	}


	template <typename T = uintptr_t> T get_Toggle() {
		return ((T (*)(IToggleMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

}
