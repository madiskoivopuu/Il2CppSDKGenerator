#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Kinds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Kinds"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Kinds*> static T& Resource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Kinds*> static T& Quest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Kinds*> static T& Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Kinds*> static T& Magic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Kinds*> static T& Mail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Kinds*> static T& Limit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

