#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Emulation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Emulation"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Emulation*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Emulation*> static T& Arena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Emulation*> static T& Map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

