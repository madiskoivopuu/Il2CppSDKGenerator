#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITextMonoBehaviour"));
	}


	template <typename T = uintptr_t> T get_Text() {
		return ((T (*)(ITextMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

}
