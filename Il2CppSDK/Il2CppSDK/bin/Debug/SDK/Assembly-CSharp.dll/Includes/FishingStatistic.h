#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingStatistic"));
	}

	template <typename T = Il2CppString*> T& ToolName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& OscillationName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& UseFishnetName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Success() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LureName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& NodeName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& Duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& Result() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> T ToLogString() {
		return ((T (*)(FishingStatistic*))(Il2CppBase() + 0x169A474))(this);
	}

};

}
