#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToggleMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToggleMonoBehaviour"));
	}


	template <typename R = uintptr_t> R get_Toggle() {
		return ((R (*)(IToggleMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

