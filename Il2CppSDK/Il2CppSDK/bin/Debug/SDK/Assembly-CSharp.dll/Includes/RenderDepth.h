#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderDepth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderDepth"));
	}

	template <typename R = uintptr_t> R& _camera() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RenderDepth*))(Il2CppBase() + 0x13A29F4))(this);
	}
	template <typename R = void> R SetRT() {
		return ((R (*)(RenderDepth*))(Il2CppBase() + 0x13A29F8))(this);
	}

};

