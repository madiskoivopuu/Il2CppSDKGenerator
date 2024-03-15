#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualityVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualityVariant"));
	}

	template <typename R = uintptr_t> R& Texture() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TexName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Renderer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& MaterialIndex() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

