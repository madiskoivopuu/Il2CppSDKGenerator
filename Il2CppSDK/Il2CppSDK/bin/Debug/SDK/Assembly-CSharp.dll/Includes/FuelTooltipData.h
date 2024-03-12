#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelTooltipData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelTooltipData"));
	}

	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
