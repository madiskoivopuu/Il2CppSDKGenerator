#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildInstance"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Slot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& Orientation() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
