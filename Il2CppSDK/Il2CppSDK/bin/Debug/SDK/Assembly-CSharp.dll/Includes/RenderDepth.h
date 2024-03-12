#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderDepth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderDepth"));
	}

	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RenderDepth*))(Il2CppBase() + 0x13A29F4))(this);
	}
	template <typename T = void> T SetRT() {
		return ((T (*)(RenderDepth*))(Il2CppBase() + 0x13A29F8))(this);
	}

};

}
