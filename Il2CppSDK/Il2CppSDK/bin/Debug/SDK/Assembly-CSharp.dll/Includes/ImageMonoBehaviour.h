#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T IImageMonoBehaviour_get_Image() {
		return ((T (*)(ImageMonoBehaviour*))(Il2CppBase() + 0x1E3DB60))(this);
	}

};

}
