#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ECheatType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ECheatType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ECheatType*> static T& Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ECheatType*> static T& Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

