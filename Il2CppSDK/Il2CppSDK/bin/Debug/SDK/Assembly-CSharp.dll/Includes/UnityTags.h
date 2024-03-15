#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityTags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityTags"));
	}

	template <typename R = Il2CppString*> static R& HudController() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GameController() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& GroundController() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

