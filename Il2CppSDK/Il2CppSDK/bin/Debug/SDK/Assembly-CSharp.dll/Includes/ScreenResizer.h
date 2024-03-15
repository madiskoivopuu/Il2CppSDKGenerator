#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenResizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenResizer"));
	}

	template <typename R = float> R& sizeMultiplier() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& myRenderTexture() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R OnPreRender() {
		return ((R (*)(ScreenResizer*))(Il2CppBase() + 0x135B598))(this);
	}
	template <typename R = void> R OnPostRender() {
		return ((R (*)(ScreenResizer*))(Il2CppBase() + 0x135B67C))(this);
	}

};

