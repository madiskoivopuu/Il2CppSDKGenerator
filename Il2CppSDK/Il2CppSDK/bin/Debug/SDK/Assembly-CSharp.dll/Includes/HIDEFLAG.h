#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HIDEFLAG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HIDE_FLAG"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HIDEFLAG*> static T& NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = HIDEFLAG*> static T& FOG_OF_WAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = HIDEFLAG*> static T& COVER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

