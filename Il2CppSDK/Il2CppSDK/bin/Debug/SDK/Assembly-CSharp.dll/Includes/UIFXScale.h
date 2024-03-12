#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIFXScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXScale"));
	}

	template <typename T = Il2CppVector2> T& effectSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& effectRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIFXScale*))(Il2CppBase() + 0x102F704))(this);
	}

};

}
