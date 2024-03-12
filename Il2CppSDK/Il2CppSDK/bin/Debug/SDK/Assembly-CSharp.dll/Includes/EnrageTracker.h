#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnrageTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnrageTracker"));
	}

	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
