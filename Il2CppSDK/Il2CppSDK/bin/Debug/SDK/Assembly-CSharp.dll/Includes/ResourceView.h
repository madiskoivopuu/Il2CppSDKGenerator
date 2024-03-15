#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceView"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Amount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Resource> R& _resource() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(Resource resource) {
		return ((R (*)(ResourceView*, Resource))(Il2CppBase() + 0x119C8E4))(this, resource);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(ResourceView*))(Il2CppBase() + 0x119C9DC))(this);
	}

};

