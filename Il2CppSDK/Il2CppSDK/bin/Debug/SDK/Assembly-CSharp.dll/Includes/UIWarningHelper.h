#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWarningHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWarningHelper"));
	}


	template <typename R = void> static R ShowWarning(uintptr_t selectable, Il2CppString* msg) {
		return ((R (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x153232C))(0, selectable, msg);
	}

};
