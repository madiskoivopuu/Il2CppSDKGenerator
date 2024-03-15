#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class TextImageMonoBehaviour : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextImageMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = uintptr_t> R IImageMonoBehaviour_get_Image() {
		return ((R (*)(TextImageMonoBehaviour*))(Il2CppBase() + 0x14EDF5C))(this);
	}

};

