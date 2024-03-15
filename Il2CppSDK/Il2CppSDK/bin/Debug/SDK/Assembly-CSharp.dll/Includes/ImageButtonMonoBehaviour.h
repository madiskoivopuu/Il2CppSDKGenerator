#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageMonoBehaviour.h" 

class ImageButtonMonoBehaviour : public ImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageButtonMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = uintptr_t> R IButtonMonoBehaviour_get_Button() {
		return ((R (*)(ImageButtonMonoBehaviour*))(Il2CppBase() + 0x1E3DB48))(this);
	}

};

