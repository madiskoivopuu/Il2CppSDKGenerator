#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Amount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _resource() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(uintptr_t resource) {
		return ((T (*)(ResourceView*, uintptr_t))(Il2CppBase() + 0x119C8E4))(this, resource);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ResourceView*))(Il2CppBase() + 0x119C9DC))(this);
	}

};

}
