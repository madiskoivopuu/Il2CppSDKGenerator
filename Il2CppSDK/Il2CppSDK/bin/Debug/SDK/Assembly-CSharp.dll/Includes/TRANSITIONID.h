#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TRANSITIONID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TRANSITION_ID"));
	}

	template <typename R = int32_t> static R& LOGIN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ARENA() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = int32_t> static R& MAP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = int32_t> static R& COORDINATOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename R = int32_t> static R& CONFIGURATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = int32_t> static R& RESOURCE_LOAD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}


};

