#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImageMonoBehaviour"));
	}


	template <typename R = uintptr_t> R get_Image() {
		return ((R (*)(IImageMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};
