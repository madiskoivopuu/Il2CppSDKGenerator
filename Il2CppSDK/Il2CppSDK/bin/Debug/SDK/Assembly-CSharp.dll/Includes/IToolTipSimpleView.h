#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipSimpleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipSimpleView"));
	}


	template <typename T = void> T Bind(uintptr_t source, Il2CppString* caption, Il2CppArray<uintptr_t>* description) {
		return ((T (*)(IToolTipSimpleView*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, source, caption, description);
	}
	template <typename T = bool> T get_IsInited() {
		return ((T (*)(IToolTipSimpleView*))(Il2CppBase() + 0x0))(this);
	}

};

}
