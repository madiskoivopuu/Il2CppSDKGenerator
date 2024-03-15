#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildInstance"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Slot() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& OffsetX() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& OffsetY() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

