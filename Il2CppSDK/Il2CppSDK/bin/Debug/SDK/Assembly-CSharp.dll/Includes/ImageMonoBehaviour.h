#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R IImageMonoBehaviour_get_Image() {
		return ((R (*)(ImageMonoBehaviour*))(Il2CppBase() + 0x1E3DB60))(this);
	}

};

