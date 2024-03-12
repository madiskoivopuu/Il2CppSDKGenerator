#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualityVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualityVariant"));
	}

	template <typename T = uintptr_t> T& Texture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TexName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Renderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MaterialIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
