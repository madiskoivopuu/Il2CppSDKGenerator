#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScreenResizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScreenResizer"));
	}

	template <typename T = float> T& sizeMultiplier() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& myRenderTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnPreRender() {
		return ((T (*)(ScreenResizer*))(Il2CppBase() + 0x135B598))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(ScreenResizer*))(Il2CppBase() + 0x135B67C))(this);
	}

};

}
