#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonsAnimatorType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonsAnimatorType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& Blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& LightBlue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& Black() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& Green() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& LightGreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& Red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ButtonsAnimatorType*> static T& Yellow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

