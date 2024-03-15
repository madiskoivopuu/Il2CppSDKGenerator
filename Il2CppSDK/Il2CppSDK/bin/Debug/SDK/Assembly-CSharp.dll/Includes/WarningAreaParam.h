#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaParam"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& StartDistance() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Color() {
		return *(R*)((uintptr_t)this + 0x30);
	}


};

