#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITextMonoBehaviour"));
	}


	template <typename R = uintptr_t> R get_Text() {
		return ((R (*)(ITextMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

