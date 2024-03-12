#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActTabsControllerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActTabsControllerContext"));
	}


	template <typename T = void> T ShowAct(uintptr_t actData) {
		return ((T (*)(IActTabsControllerContext*, uintptr_t))(Il2CppBase() + 0x0))(this, actData);
	}

};

}
