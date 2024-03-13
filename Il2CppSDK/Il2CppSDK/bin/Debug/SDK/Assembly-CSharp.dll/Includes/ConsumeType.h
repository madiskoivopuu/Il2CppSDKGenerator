#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConsumeType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsumeType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ConsumeType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConsumeType*> static T& ToMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConsumeType*> static T& ToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

