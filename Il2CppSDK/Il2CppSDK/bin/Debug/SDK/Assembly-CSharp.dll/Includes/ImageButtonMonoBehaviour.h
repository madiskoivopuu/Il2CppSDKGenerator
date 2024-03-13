#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageMonoBehaviour.h" 

class ImageButtonMonoBehaviour : public ImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageButtonMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T IButtonMonoBehaviour_get_Button() {
		return ((T (*)(ImageButtonMonoBehaviour*))(Il2CppBase() + 0x1E3DB48))(this);
	}

};

