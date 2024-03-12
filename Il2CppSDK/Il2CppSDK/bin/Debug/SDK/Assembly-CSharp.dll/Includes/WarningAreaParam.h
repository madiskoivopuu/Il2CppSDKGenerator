#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaParam"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& StartDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Color() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
