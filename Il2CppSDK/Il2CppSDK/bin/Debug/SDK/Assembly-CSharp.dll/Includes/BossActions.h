#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossActions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossActions"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = BossActions*> static T& Open() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BossActions*> static T& Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BossActions*> static T& Donate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BossActions*> static T& Enter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

