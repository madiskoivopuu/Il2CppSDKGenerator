#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityTags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityTags"));
	}

	template <typename T = Il2CppString*> static T& HudController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GameController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& GroundController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

