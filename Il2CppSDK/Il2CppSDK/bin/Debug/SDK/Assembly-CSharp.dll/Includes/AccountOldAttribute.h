#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountOldAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountOldAttribute"));
	}

	template <typename R = Il2CppString*> R& ConvertMethodName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R get_ConvertMethodName() {
		return ((R (*)(AccountOldAttribute*))(Il2CppBase() + 0xFE0608))(this);
	}
	template <typename R = void> R set_ConvertMethodName(Il2CppString* value) {
		return ((R (*)(AccountOldAttribute*, Il2CppString*))(Il2CppBase() + 0xFE0610))(this, value);
	}

};

