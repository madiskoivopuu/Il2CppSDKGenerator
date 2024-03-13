#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRect"));
	}

	template <typename T = float> T& Left() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Right() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Top() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Bottom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

