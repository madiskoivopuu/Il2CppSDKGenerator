#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountOldAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountOldAttribute"));
	}

	template <typename T = Il2CppString*> T& ConvertMethodName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_ConvertMethodName() {
		return ((T (*)(AccountOldAttribute*))(Il2CppBase() + 0xFE0608))(this);
	}
	template <typename T = void> T set_ConvertMethodName(Il2CppString* value) {
		return ((T (*)(AccountOldAttribute*, Il2CppString*))(Il2CppBase() + 0xFE0610))(this, value);
	}

};

}
