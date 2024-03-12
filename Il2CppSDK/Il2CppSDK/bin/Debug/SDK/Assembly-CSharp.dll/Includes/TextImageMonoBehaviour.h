#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour" 

class TextImageMonoBehaviour: TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextImageMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T IImageMonoBehaviour_get_Image() {
		return ((T (*)(TextImageMonoBehaviour*))(Il2CppBase() + 0x14EDF5C))(this);
	}

};

}
