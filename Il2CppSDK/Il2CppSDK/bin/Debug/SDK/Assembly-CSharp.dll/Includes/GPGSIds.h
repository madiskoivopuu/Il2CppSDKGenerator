#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GPGSIds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GPGSIds"));
	}

	template <typename R = Il2CppString*> static R& achievement_1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& achievement_2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& achievement_4() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& achievement_test_achievement_1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& achievement_3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

